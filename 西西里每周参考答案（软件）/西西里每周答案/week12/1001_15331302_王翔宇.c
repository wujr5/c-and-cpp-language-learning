#include <stdio.h>

int main() {
    int t, n, i, count;
    float num[100], sum = 0, average = 0;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        sum = 0;
        count = 0;
        for (i = 0; i < n; i++) {
            scanf("%f", num + i);
            sum += *(num + i);
        }
        average = sum / n;
        for (i = 0; i < n; i++) {
            if (*(num + i) > average)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
