//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
void main(){
    int m, n, i, j, arr[100][100];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements: \n", m*n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal traversal: ");
    for(i = 0; i < m+n-1; i++){
        if(i%2 == 0){
            for(j = 0; j <= i; j++){
                if(j < m && i-j < n){
                    printf("%d ", arr[j][i-j]);
                }
            }
        } else {
            for(j = i; j >= 0; j--){
                if(j < m && i-j < n){
                    printf("%d ", arr[j][i-j]);
                }
            }
        }
    }
    printf("\n");
}