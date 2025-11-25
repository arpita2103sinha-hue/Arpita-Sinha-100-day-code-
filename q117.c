#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m], b[n];

    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    
    while (i < m) {
        merged[k++] = a[i++];
    }

    
    while (j < n) {
        merged[k++] = b[j++];
    }

  
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}

