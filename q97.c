#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a full name: ");
    gets(str);

    
    if (str[0] != ' ')
        printf("%c ", str[0]);

    
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c ", str[i]);
    }

    return 0;
}

