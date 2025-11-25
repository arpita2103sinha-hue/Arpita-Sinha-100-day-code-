#include <stdio.h>

enum Example {
    A = 5,
    B,
    C = 20,
    D
};



int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);   // Auto-increments after A
    printf("C = %d\n", C);
    printf("D = %d\n", D);   // Auto-increments after C

    return 0;
}

