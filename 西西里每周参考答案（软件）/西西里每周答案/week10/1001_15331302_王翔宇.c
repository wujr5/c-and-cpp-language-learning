#include <stdio.h>

int main() {
    int n, m, i, j;
    while (scanf("%d%d", &n, &m) != EOF) {
        char src[n][m + 1];
        for (i = 0; i < n; i++) {
            scanf("%s", &src[i]);
            for (j = 0; j < m; j++)
                if (src[i][j] == 'b') src[i][j] = 'd';
        }
        for (i = 0; i < n; i++) {
            for (j = m - 1; j >= 0; j--)
                printf("%c", src[i][j]);
            puts("");
        }
        puts("");
    }
    return 0;
}
