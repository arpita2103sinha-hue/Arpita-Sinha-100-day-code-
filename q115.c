#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

   
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};

   
    for (int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;
    }


    for (int i = 0; i < strlen(t); i++) {
        freq[t[i] - 'a']--;
    }

   
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

