#include <stdio.h>

int main() {
    int n, i, j;

    while ((n = getchar()) != '0') {
        n -= 48;
        int a[n][n], b[n][n], c[n][n];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &b[i][j]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d%c", c[i][j], j == n - 1 ? '\n' : ' ');
            }
    }
    return 0;
}
