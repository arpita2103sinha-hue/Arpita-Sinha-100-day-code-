//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

void main() {
    
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                printf("Leap year\n");
            }
            else {
                printf("Not a leap year\n");
            }
        }
        else {
            printf("Leap year\n");
        }
    } else {
        printf("Not a leap year\n");
    }

}