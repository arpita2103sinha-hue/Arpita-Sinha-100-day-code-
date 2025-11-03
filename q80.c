//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
void main(){
    int m1, n1, m2, n2, i, j, k, arr1[100][100], arr2[100][100], result[100][100];
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter %d elements of first matrix: \n", m1*n1);
    for(i = 0; i < m1; i++){
        for(j = 0; j < n1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);
    if(n1 != m2){
        printf("Matrix multiplication not possible.\n");
        return;
    }
    printf("Enter %d elements of second matrix: \n", m2*n2);
    for(i = 0; i < m2; i++){
        for(j = 0; j < n2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    // Initialize result matrix to 0
    for(i = 0; i < m1; i++){
        for(j = 0; j < n2; j++){
            result[i][j] = 0;
        }
    }
    // Multiply matrices
    for(i = 0; i < m1; i++){
        for(j = 0; j < n2; j++){
            for(k = 0; k < n1; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication: \n");
    for(i = 0; i < m1; i++){
        for(j = 0; j < n2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}