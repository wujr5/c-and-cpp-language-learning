#include <stdio.h>

static int aux[10000000];
void mergee(int a[], int lo, int mid, int hi);
void mergesort(int a[], int lo, int hi);

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);

int main() {
    int list1[] = {1, 5, 16, 61, 111}, list2[] = {2, 4, 5, 6};
    int list3[9];
    merge(list1, 5, list2, 4, list3);
    int i;
    for (i = 0; i < 9; i++)
        printf("%d ", list3[i]);
    return 0;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i, j;
    for (i = 0; i < size1; i++)
        list3[i] = list1[i];
    for (; i < size1 + size2; i++)
        list3[i] = list2[i - size1];
    mergesort(list3, 0, size1 + size2 - 1);
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
