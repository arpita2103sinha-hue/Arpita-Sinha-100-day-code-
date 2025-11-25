#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "w");   
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt");

    return 0;
}

