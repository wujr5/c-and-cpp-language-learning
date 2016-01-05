#include <stdio.h>

int main() {
    long a, b, i;
    scanf("%d%d", &a, &b);
    i = a % 2 == 0 ? a + 1 : a;
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= b);
    return 0;
}