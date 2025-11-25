#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("%s", str);

    return 0;
}

