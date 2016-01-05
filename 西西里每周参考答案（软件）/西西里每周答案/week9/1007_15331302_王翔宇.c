#include <stdio.h>

long long oper3(int l, int r);

long long num[100001];
long long sum[100001];

int main() {
    int n, m, i, k = 0;
    scanf("%d%d", &n, &m);
    int operation;
    for (i = 1; i <= n; i++) {
        scanf("%lld", &num[i]);
        sum[i] = sum[i - 1] + num[i];
    }
    int flag = 1;
    long long x1 = 0, x2 = 0;

    for (k = 0; k < m; k++) {

        scanf("%d", &operation);

        switch (operation) {
            case 1 : {
                    flag *= -1;
                    break;
                }
            case 2 : {
                    long long x;
                    scanf("%lld", &x);
                    if (flag == -1) x2 += x;
                    else x1 += x;
                    break;
                }
            case 3 : {
                    int l, r;
                    scanf("%d%d", &l, &r);
                    int width = r - l + 1;
                    printf("%lld\n", oper3(l, r) * flag + width * flag * (x1 - x2));
                    break;
                }
        }
    }
    return 0;
}

long long oper3(int l, int r) {
    return sum[r] - sum[l - 1];
}
