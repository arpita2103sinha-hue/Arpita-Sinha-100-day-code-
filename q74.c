//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>
void main(){
    int rows, cols, i, j, matrix[100][100], transpose[100][100];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
