//Q24: Write a program to calculate an electricity b based on a consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
b: ₹250

Input 2:
150
Output 2:
b: ₹950

Input 3:
250
Output 3:
b: ₹2200

*/

#include <stdio.h>

void main() {
    int a;
    float b;

    printf("Enter Units consumed: ");
    scanf("%d", &a);

    if (a <= 100) {
        b = a * 2.5;
    } else if (a <= 200) {
        b = 100 * 2.5 + (a - 100) * 4.75;
    } else {
        b = 100 * 2.5 + 100 * 4.75 + (a - 200) * 6.0;
    }

    printf("Bill: ₹%f\n", b);
}