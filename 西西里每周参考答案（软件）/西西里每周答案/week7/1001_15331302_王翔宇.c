#include <stdio.h>

int main() {
    int a[20], b[20];
    int i, j, k = 0;
    for (i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
        j = 0;
        while (a[i] != a[j] && j < i) j++;
    }
    for (i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
