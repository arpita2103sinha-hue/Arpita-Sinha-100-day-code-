//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter length of rectangle: ");
    scanf("%d", &a);
    printf("Enter breath of rectangle: ");
    scanf("%d", &b);
    c = a * b;
    d = 2 * (a + b);
    printf("\nPerimeter of rectangle: %d", d);
    printf("\nArea of rectangle: %d", c);  
}
