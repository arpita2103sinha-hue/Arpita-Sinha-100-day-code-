#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int negIndex[n];   
    int front = 0, rear = 0;

  
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndex[rear++] = i;
    }

    if (front == rear)
        printf("0 ");
    else
        printf("%d ", arr[negIndex[front]]);

    for (int i = k; i < n; i++) {

        if (front < rear && negIndex[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }

        if (front == rear)
            printf("0 ");
        else
            printf("%d ", arr[negIndex[front]]);
    }

    return 0;
}

