//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
void main()

{
    int a,b,c,d,e,f;
    printf("\nEnter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    printf("Sum: %d", c);  
    printf("\nDiff: %d", d);  
    printf("\nProduct: %d", e);  
    if (b != 0) {
        f = a / b;
        printf("\nQuotient: %d", f); 
    } else {
        printf("\nDivision by zero is not allowed.");
    }
 
}