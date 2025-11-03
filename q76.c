//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
void main(){
    int rows, cols, i, j, matrix[100][100], isSymmetric = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols){
        printf("False\n");
        return;
    }
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric){
            break;
        }
    }
    if(isSymmetric){
        printf("True\n");
    } else {
        printf("False\n");
    }
}
