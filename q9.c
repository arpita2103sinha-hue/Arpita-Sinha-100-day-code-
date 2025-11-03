//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
void main()
{
    float a,b,d,e;
    int i,c;
    printf("Enter principal: ");
    scanf("%f", &a);
    printf("Enter rate: ");
    scanf("%f",&b);
    printf("Enter time: ");
    scanf("%d", &c);
     
    d = (a*b*c) / 100;
    e=a;
    for(i = 0; i < c; i++) {
        e = e * (1 + b/100);
    }
    e = e - a;
    printf("Simple Interest=%f", d);
    printf("\nCompound Interest=%f", e);

}