//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
void main(){
    int rows, cols, i, j, matrix[100][100], diagElements[100], isDistinct = 1, diagSize;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols){
        printf("Matrix must be square to check diagonal elements.\n");
        return;
    }
    diagSize = rows; // Since it's a square matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < diagSize; i++){
        diagElements[i] = matrix[i][i];
    }
    for(i = 0; i < diagSize; i++){
        for(j = i + 1; j < diagSize; j++){
            if(diagElements[i] == diagElements[j]){
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct){
            break;
        }
    }
    if(isDistinct){
        printf("True\n");
    } else {
        printf("False\n");
    }
}