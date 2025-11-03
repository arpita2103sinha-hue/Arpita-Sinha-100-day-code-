//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
void main()
{
    float c,f;
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("\nFahrenheit: %f", f);
}