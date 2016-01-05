#include <stdio.h>

int main() {
    int n ,i;
    double sum = 0, average = 0, variance2 = 0, num[100000];
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%lf", &num[i-1]);
        sum += num[i-1];
    }
    average = sum / n;
    for (i = 1; i <= n; i++) {
        variance2 += (num[i-1] - average) * (num[i-1] - average);
    }
    variance2 /= n;
    printf("%.2f %.2f\n", average, variance2);
    return 0;
}