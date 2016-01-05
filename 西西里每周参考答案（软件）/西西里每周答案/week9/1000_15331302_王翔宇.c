#include <stdio.h>

int rollMatrix(int i, int j, int n);
int min(int a, int b);

int main() {
    int n, i, j;
    scanf("%d", &n);
    int matrix[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("%d%c", rollMatrix(i, j, n), j == n - 1 ? '\n' : ' ');
        }
    return 0;
}

int min(int a, int b) {
    return a > b ? b : a;
}

int rollMatrix(int i, int j, int n) {
    int ph, l, lefttop;
    ph = min(min(i, n - 1 - i), min(j, n - 1 - j));
    i -= ph;
    j -= ph;
    l = n - 2 * ph;
    lefttop = 4 * ph * (n - ph) + 1;
    if (i == 0) return lefttop + j;
    else if (j == 0) return lefttop + 4 * (l - 1) - i;
    else if (i == l - 1) return lefttop + 4 * l - 3 - l - j;
    return lefttop + l - 1 + i;
}
