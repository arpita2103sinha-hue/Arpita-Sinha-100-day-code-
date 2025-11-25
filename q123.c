#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");   // Change filename if needed

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;  

        if (ch == '\n')
            lines++;  

        
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;  
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;  
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

