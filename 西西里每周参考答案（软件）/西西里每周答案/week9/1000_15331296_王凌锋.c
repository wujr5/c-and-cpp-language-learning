#include<stdio.h>
int main(){
    int i, j, n, k, m, l, m1, l1;
    scanf("%d", &n);
    int a[n][n];
    k = n / 2;
    a[0][0] = 1;
    for (j = 1; j < n; j++) {
        a[0][j] = a[0][j-1] + 1;
    }
    k = n / 2;
    m1 = n - 1;
    l1 = 1;
    if (n % 2 == 1){
        for (i = 0; i < k; i++) {
            for (j = l1; j <= m1; j++) {
                a[j][m1] = a[j - 1][m1] + 1;
            }
            for (j = n - l1 - 1; j >= n- m1 - 1; j--) {
                a[m1][j] = a[m1][j + 1] + 1;
            }
            for (j = m1 - 1; j >= l1; j--) {
                a[j][l1 - 1] = a[j + 1][l1 - 1] + 1;
            }
            for (j = n - m1; j < m1; j++) {
                a[l1][j] = a[l1][j - 1] + 1;
            }
            m1 = m1 - 1;
            l1 = l1 + 1;
        }
    }
        if (n % 2 == 0){
        for (i = 0; i < k - 1; i++) {
            for (j = l1; j <= m1; j++) {
                a[j][m1] = a[j - 1][m1] + 1;
            }
            for (j = n - l1 - 1; j >= n- m1 - 1; j--) {
                a[m1][j] = a[m1][j + 1] + 1;
            }
            for (j = m1 - 1; j >= l1; j--) {
                a[j][l1 - 1] = a[j + 1][l1 - 1] + 1;
            }
            for (j = n - m1; j < m1; j++) {
                a[l1][j] = a[l1][j - 1] + 1;
            }
            m1 = m1 - 1;
            l1 = l1 + 1;
        }
        for (j = l1; j <= m1; j++) {
            a[j][m1] = a[j-1][m1] + 1;
        }
        for (j = n - l1 - 1; j >= n- m1 - 1;j--) {
            a[m1][j] = a[m1][j+1] + 1;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
