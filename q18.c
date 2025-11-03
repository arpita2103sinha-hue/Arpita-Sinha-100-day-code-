//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

void main() {
    
    int a;
    printf("Enter percentage: ");
    scanf("%d", &a);
    
    if (a >= 90 && a <= 100) {
        printf("Grade A\n");
    } else if (a >= 80 && a < 90) {
        printf("Grade B\n");
    } else if (a >= 70 && a < 80) {
        printf("Grade C\n");
    } else if (a >= 60 && a < 70) {
        printf("Grade D\n");
    } else if (a >= 0 && a < 60) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage\n");
    }

}