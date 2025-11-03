//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
void main()
{
    float a,b,c,d,e;
    e=3.14;
    printf("\nEnter radius of circle: ");
    scanf("%f", &a);
    b = e*a*a;
    c = 2*e*a;
    printf("\nArea: %f", b);
    printf("\nCircumference: %f", c);
}
