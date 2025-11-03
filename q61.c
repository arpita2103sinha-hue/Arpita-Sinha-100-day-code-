//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>



void main(){
    int n, i, arr[100], target, found = -1;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++){
        if(arr[i] == target){
            found = i;
            break;
        }
    }
    if(found != -1){
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }
}