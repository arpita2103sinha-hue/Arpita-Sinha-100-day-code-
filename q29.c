//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

void main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
}