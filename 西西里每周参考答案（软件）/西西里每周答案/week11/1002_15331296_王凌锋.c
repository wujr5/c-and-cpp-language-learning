#include<stdio.h>
int which(const int *a, int n) {
    int j;
    for (j = 0; a[j] <= n; j++) {
        if (a[j] == n) {
            return j + 1;
        }
    }
    return 0;
}
int main() {
    int a[100], T, i;
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < 100; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
    scanf("%d", &T);
    int b[T];
    for (i = 0; i < T; i++) {
        scanf("%d", &b[i]);
        printf("%d\n", which(a, b[i]));
    }
}
