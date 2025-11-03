//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
void main(){
    int rows, cols, i, j, matrix[100][100], diagSum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols){
        printf("Matrix must be square to calculate main diagonal sum.\n");
        return;
    }
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++){
        diagSum += matrix[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", diagSum);
}
