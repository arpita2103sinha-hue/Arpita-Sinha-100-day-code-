//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

void main() {

    float cp,sp,p,l,pp,lp;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        p = sp - cp;
        pp = (p / cp) * 100;
        printf("Profit %f%%\n", pp);
    } else if (cp > sp) {
        l = cp - sp;
        lp = (l / cp) * 100;
        printf("Loss %f%%\n", lp);
    } else {
        printf("No Profit No Loss\n");
    }

}