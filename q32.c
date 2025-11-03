//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
void main() {
    int num, o, r = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    o = num;

    while(num != 0) {
        int digit = num % 10;
        r = r * 10 + digit;
        num /= 10;
    }

    if(o == r) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}