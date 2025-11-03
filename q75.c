//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
void main(){
    int rows1, cols1, rows2, cols2, i, j, matrix1[100][100], matrix2[100][100], sum[100][100];
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if(rows1 != rows2 || cols1 != cols2){
        printf("Error: Matrices must have the same dimensions to be added.\n");
        return;
    }
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows2; i++){
        for(j = 0; j < cols2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}