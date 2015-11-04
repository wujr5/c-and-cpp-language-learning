#include<stdio.h>
int main() {
    int n, i, k, max = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &k);
        if (k > max) max = k;
    }
    printf("%d\n", max);
    return 0;
}                                 
