//Q50: Write a program to print the following pattern:
/*
*****
 ****
  ***
   **
    *
*/

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *


Note: Spaces indicate indentation.

*/
#include <stdio.h>
void main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < rows - i; k++) {
            printf("*");
        }
        printf("\n");
    }
}