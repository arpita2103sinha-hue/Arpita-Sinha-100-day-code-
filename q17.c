//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

void main(){

    float a,b,c,d,e,f,g;
    printf("Enter a,b,c of a quadratic equation of form ax^2+bx+c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    d=b*b-4*a*c;

    if (d>0) {
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct: %f and %f",e,f);
    }
    else if(d==0){
        g=-b/(2*a);
        printf("Roots are real and equal: %f",g);
    }
    else{
        printf("Roots are imaginary.");
    }
}