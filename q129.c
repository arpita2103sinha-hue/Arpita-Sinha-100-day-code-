#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");   
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

