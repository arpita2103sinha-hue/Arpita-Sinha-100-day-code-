//Q51: Write a program to print the following pattern:
/*
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>
void main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int k = rows - i; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
}