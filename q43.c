//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

void main() {
    int number, temp, sumOfFactorials = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        int factorial = 1;
        
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        
        sumOfFactorials += factorial;
        temp /= 10;
    }

    if (sumOfFactorials == number) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
}