//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
void main(){
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[count] != '\0'){
        count++;
    }
    // Subtracting 1 to not count the newline character added by fgets
    if(count > 0 && str[count - 1] == '\n'){
        count--;
    }
    printf("Number of characters: %d\n", count);
}