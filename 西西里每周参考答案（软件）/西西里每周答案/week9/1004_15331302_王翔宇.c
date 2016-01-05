#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[n][n], b[n][n], i, j, k;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &b[i][j]);
        int c[n][n];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                for (k = 0; k < n; k++)
                    c[i][j] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                for (k = 0; k < n; k++)
                    c[i][j] += a[i][k] * b[k][j];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                printf("%d%c", c[i][j], j == n - 1 ? '\n' : ' ');
    }
    return 0;
}
