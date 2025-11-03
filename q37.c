//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;
    while (b != 0) {
        int x = b;
        b = a % b;
        a = x;
    }
    int y = a;

    lcm = (num1 * num2) / y;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}