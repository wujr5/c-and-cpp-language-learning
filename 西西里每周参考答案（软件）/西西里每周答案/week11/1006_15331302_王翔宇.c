#include <stdio.h>

void hanota(int n, int a, int b, int c);

int main() {
    int n;
    scanf("%d", &n);
    hanota(n, 1, 2, 3);
    return 0;
}

void hanota(int n, int a, int b, int c) {
    if (n == 1) printf("%d%d\n", a, c);
    else {
        hanota(n - 1, a, c, b);
        hanota(1, a, b, c);
        hanota(n - 1, b, a, c);
    }
}
