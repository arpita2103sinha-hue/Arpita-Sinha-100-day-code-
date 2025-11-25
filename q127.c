#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");     
    if (fin == NULL) {
        printf("Error: input.txt cannot be opened.\n");
        return 1;
    }

    fout = fopen("output.txt", "w");   
    if (fout == NULL) {
        printf("Error: output.txt cannot be created.\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Text converted to uppercase and written to output.txt\n");

    return 0;
}

