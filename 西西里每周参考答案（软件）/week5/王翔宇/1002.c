#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a >= b) {
        printf("%d\n", a);
        return 0;
    }
    printf("%d\n", b);
    return 0;
}