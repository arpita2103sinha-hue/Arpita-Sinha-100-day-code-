//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int num, og, rm, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    og = num;
    while (og != 0) {
        og /= 10;
        ++n;
    }

    og = num;
    while (og != 0) {
        rm = og % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= rm;
        }
        result += power;
        og /= 10;
    }
    if (result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
