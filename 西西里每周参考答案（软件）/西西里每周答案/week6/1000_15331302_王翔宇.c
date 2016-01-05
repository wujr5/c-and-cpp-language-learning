#include <stdio.h>

int main() {
    int x, n, max, min;
    scanf("%d", &n);
    scanf("%d", &x);
    max = x;
    min = x;
    while (n > 1) {
        scanf("%d", &x);
        if (x > max) max = x;
        if (x < min) min = x;
        n--;
    }
    printf("%d %d\n", max,min);
    return 0;
}