//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>



void main() {
    int number, firstDigit, lastDigit, numDigits = 0, temp, swappedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    lastDigit = temp % 10; 


    while (temp >= 10) {
        temp /= 10;
        numDigits++;
    }
    firstDigit = temp;
    numDigits++; 

    if (numDigits == 1) {
        swappedNumber = number;
    } else {
        swappedNumber = lastDigit * pow(10, numDigits - 1) + 
                        (number % (int)pow(10, numDigits - 1) - lastDigit) + 
                        firstDigit;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNumber);
}