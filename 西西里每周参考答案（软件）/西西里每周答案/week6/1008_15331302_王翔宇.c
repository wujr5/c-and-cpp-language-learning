#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    if (n == 1) {
        printf("No\n");
        return 0;
    }
    if (n == 2) {
        printf("Yes\n");
        return 0;
    }
    for (i = 2; i < n; i++)
        if (n % i == 0) {
            printf("No\n");
            return 0;
        }
    printf("Yes\n");
    return 0;
}