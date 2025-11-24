#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};  
    int i = 0;

    
    while (str1[i] != '\0') {
        count[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;

    
    while (str2[i] != '\0') {
        count[(unsigned char)str2[i]]--;
        i++;
    }

    
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0; 
    }

    return 1; 
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}

