#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;  

    for (int i = 0; i < strlen(s); i++) {
        char ch = s[i];

        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i;

        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d", maxLen);

    return 0;
}

