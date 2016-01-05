#include <stdio.h>

unsigned char src[10000000];

int main() {
    int n, m, i, flag;
    int x, y, z;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &x, &y, &z);
        src[x * 200 * 200 + y * 200 + z] = 26;
    }
    for (i = 0; i < m; i++) {
        scanf("%d%d%d", &x, &y, &z);
        if (src[x * 200 * 200 + y * 200 + z] == 26)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
