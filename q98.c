#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter full name: ");
    gets(str);

    int len = strlen(str);
    int lastSpace = -1;

    // Find the last space ? start of surname
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials (all words before surname)
    if (str[0] != ' ')
        printf("%c ", str[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c ", str[i]);
    }

    // Print surname in full
    printf("%s", str + lastSpace + 1);

    return 0;
}

