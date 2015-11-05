#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    printf("%d\n", a[i]);
    }
}