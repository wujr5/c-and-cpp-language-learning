#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d\n", gcd(a, b));
    }
    return 0;
}

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
