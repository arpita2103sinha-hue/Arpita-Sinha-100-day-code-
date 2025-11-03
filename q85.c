//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
void main(){
    char str[100];
    int i = 0, j, temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find the length of the string
    while(str[i] != '\0'){
        i++;
    }
    // Exclude the newline character if present
    if(i > 0 && str[i - 1] == '\n'){
        i--;
    }
    j = i - 1; // Set j to the last character index
    // Reverse the string
    for(int k = 0; k < i / 2; k++){
        temp = str[k];
        str[k] = str[j - k];
        str[j - k] = temp;
    }
    str[i] = '\0'; // Null-terminate the reversed string
    printf("Reversed string: %s\n", str);
}
