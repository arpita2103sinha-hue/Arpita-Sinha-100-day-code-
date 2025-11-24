#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int n = strlen(str);

    printf("All substrings:\n");

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

