#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        int ns, i, j, k = 0;
        scanf("%d", &ns);
        int num[ns];
        int numout[ns];
        for (i = 0; i < ns; i++) {
            scanf("%d", &num[i]);
            j = 0;
            while (num[i] != num[j] && j < i) j++;
            if (j == i) numout[k++] = num[i];
        }
        for (i = 0; i < k; i++)
            printf("%d%c", numout[i], i == k - 1 ? '\n' : ' ');
        n--;
    }
    return 0;
}