//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
void main(){
    int rows, cols, i, j, matrix[100][100], rowSum[100];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++){
        rowSum[i] = 0;
        for(j = 0; j < cols; j++){
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Sum of each row: ");
    for(i = 0; i < rows; i++){
        printf("%d ", rowSum[i]);
    }
    printf("\n");
}