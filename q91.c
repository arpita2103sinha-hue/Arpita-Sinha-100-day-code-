//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (ch == vowels[i]) {
            return 1;
        }
    }
    return 0;
}