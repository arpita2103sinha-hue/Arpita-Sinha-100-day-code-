//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

void main() {
    int d;
    printf("Enter number of late days: ");
    scanf("%d", &d);

    if (d <= 5) {
        printf("Fine ₹%d\n", d * 2);
    } else if (d <= 10) {
        printf("Fine ₹%d\n", d * 4);
    } else if (d <= 30) {
        printf("Fine ₹%d\n", d * 6);
    } else {
        printf("Membership Cancelled\n");
    }
}