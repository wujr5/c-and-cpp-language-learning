#include <stdio.h>

int main() {
    int n, i, j = 0, n2 = 0;
    scanf("%d", &n);
    int a[1000], b[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            b[j++] = a[i];
            n2++;
        }
    }
    for (j = 0; j < n2; j++) {
        printf("%d%c", b[j], (j == n2 - 1) ? '\n' : ' ');
    }
    return 0;
}