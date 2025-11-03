//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>
void main(){
    int n, i, arr[100], target, left, right, mid, found = -1;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    left = 0;
    right = n - 1;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(arr[mid] == target){
            found = mid;
            break;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    if(found != -1){
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }
}