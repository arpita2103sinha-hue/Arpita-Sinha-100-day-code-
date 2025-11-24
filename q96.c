#include <stdio.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    int i = 0, start = 0;

    while (str[i] != '\0') {

        
        if (str[i] == ' ') {
            reverse(str, start, i - 1);
            start = i + 1;
        }

        if (str[i + 1] == '\0') {
            reverse(str, start, i);
        }

        i++;
    }

    printf("Output: %s", str);
    return 0;
}

