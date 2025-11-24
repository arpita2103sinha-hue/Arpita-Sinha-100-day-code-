#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200];
    
    printf("Enter a sentence: ");
    gets(str);

    int i = 0, len = 0;
    int maxLen = 0, start = 0;

    while (str[i] != '\0') {

        
        if (str[i] != ' ') {
            len++;
        }

       
        if (str[i] == ' ' || str[i+1] == '\0') {
            if (len > maxLen) {
                maxLen = len;
                
               
                int k;
                for (k = 0; k < len; k++)
                    longest[k] = str[i - len + 1 + k];
                
                longest[len] = '\0';
            }
            len = 0;  
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

