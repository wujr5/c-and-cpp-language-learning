#include <stdio.h>

static int aux[10000000];
void mergee(int a[], int lo, int mid, int hi);
void mergesort(int a[], int lo, int hi);

int main() {
    int n, i;
    scanf("%d", &n);
    int src[n];
    for (i = 0; i < n; i++)
        scanf("%d", &src[i]);
    mergesort(src, 0, n - 1);
    for (i = 0; i < n; i++)
        printf("%d\n", src[i]);
    return 0;
}


void mergee(int a[], int lo, int mid, int hi) {
    int i = lo, j = mid + 1, k;
    for (k = lo; k <= hi; k++) aux[k] = a[k];
    for (k = lo; k <= hi; k++)
        if (i > mid) a[k] = aux[j++];
        else if (j > hi) a[k] = aux[i++];
        else if (aux[j] < aux[i]) a[k] = aux[j++];
        else a[k] = aux[i++];
}

void mergesort(int a[], int lo, int hi) {
    if (hi <= lo) return;
    int mid = lo + (hi - lo) / 2;
    mergesort(a, lo, mid);
    mergesort(a, mid + 1, hi);
    mergee(a, lo, mid, hi);
}
