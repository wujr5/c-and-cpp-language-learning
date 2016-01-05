#include<stdio.h>
void quick_sort(long long int *x, long long int low, long long int high) {
    int i, j, t;
    if (low < high) {
        i = low;
        j = high;
        t = *(x + low);
        while (i < j) {
            while (i < j && * (x + j) > t) {
                j--;
            }
            if (i < j) {
                * (x + i) = * (x + j);
                i++;
            }
            while (i < j && * (x + i) <= t) {
                i++;
            }
            if (i < j) {
                * (x + j) = * (x + i);
                j--; 
            }
        }
        * (x + i) = t;
        quick_sort(x, low, i - 1);
        quick_sort(x, i + 1, high);
    }
}
int main() {
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    long long int i;
    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    quick_sort(a, 0, n - 1);
    for (i = 0; i < n; i++) {
        printf("%lld\n", a[i]);
    }
}
