//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
void main(){
    char str[100], ch;
    int i = 0, freq = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    while(str[i] != '\0'){
        if(str[i] == ch){
            freq++;
        }
        i++;
    }
    printf("Frequency of '%c': %d\n", ch, freq);
}
