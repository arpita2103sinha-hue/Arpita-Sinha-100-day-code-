//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>
void main(){
    int n, i, arr[100], pos;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete element (0 to %d): ", n-1);
    scanf("%d", &pos);
    if(pos < 0 || pos >= n){
        printf("Invalid position!\n");
        return;
    }
    for(i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
