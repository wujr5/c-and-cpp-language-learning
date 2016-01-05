#include <stdio.h>

int fibor(int a);

int main() {
    int n;
    scanf("%d", &n);
    while (n != -1) {
        printf("%d\n", 2 * fibor(n));
        scanf("%d", &n);
    }
    return 0;
}

int fibor(int a) {
    if (a == 1) return 1;
    if (a == 2) return 1;
    return fibor(a - 1) + fibor(a - 2);
}
