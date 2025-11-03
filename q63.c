//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>
void main(){
    int n1, n2, i, arr1[100], arr2[100], merged[200];
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }
    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
}