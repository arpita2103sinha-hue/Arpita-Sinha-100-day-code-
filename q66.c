//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>
void main(){
    int n, i, arr[100], element, j;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++){
        if(arr[i] > element){
            break;
        }
    }
    for(j = n; j > i; j--){
        arr[j] = arr[j-1];
    }
    arr[i] = element;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}