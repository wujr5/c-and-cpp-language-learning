#include <stdio.h>

int main() {
    int n, num, max;
    scanf("%d", &n);
    scanf("%d", &num);
    max = num;
    while (n > 1) {
        scanf("%d", &num);
        if (num > max) max = num;
        n--;
    }
    printf("%d\n", max);
    return 0;
}