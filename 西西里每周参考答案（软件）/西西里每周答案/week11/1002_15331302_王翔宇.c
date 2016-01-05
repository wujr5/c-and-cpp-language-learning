#include <stdio.h>

int fibor(int a) {
    int i, fib1, fib2, fibn;
    int res[2] = {0, 1};
    fib1 = 0; fib2 = 1; fibn = 0;
    if (a < 2) return res[a];
    for (i = 2; i < a; i++) {
        fibn = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibn;
    }
    return fibn;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t-- > 0) {
        scanf("%d", &n);
        int i = 1, x = fibor(i), flag = 1;
        while (n != x) {
            if (x > n) {
                printf("0\n");
                flag = 0;
                break;
            }
            x = fibor(++i);
        }
        if (flag) printf("%d\n", i);
    }
    return 0;
}
