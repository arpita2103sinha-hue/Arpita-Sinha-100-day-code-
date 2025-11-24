#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long long totalSum = (long long)n * (n + 1) / 2;

    long long x = sqrt(totalSum);

    if (x * x == totalSum)
        printf("%lld", x);
    else
        printf("-1");

    return 0;
}

