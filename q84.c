//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
void main(){
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        char ch = str[i];
        // Convert lowercase to uppercase
        if(ch >= 'a' && ch <= 'z'){
            str[i] = ch - ('a' - 'A');
        }
        i++;
    }
    printf("Uppercase string: %s", str);
}
