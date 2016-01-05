#include<stdio.h>
int tuzi(int n) {
    int a[n], i;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n - 1];
}
int main () {
    int n, shu;
    scanf("%d", &n);
    while(n != -1) {
        shu = tuzi(n);
        shu *= 2;
        printf("%d\n", shu);
        scanf("%d", &n);
    }
}
