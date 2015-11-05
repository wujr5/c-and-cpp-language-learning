#include <stdio.h>

void exch(int *p, int *q);

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) exch(&a, &b);
    if (a > c) exch(&a, &c);
    if (b > c) exch(&b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void exch(int *p, int *q) {
    int t;
    t = *p;
    *p = *q;
    *q = t;
}