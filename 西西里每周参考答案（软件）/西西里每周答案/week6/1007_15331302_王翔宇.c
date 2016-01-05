#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = (int)pow(10, n - 1); i < (int)pow(10, n); i++) {
        int a1, a2, a3, a4, a5, a6;
        a1 = pow(i % 10, n);
        a2 = pow(i / 10 % 10, n);
        a3 = pow(i / 100 % 10, n);
        a4 = pow(i / 1000 % 10, n);
        a5 = pow(i / 10000 % 10, n);
        a6 = pow(i / 100000 % 10, n);
        if (a1 + a2 + a3 + a4 + a5 + a6 == i)
            printf("%d\n", i);
    }
    return 0;
}