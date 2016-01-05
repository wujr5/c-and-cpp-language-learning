#include<stdio.h>
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    void quick_sort(int *x, int low, int high);
    int size3 = size1 + size2, i = 0, temp, j;
    for (i; i < size1; i++) {
        list3[i] = list1[i];
    }
    for (i = size1; i < size3; i++) {
        list3[i] = list2[i - size1];
    }
    quick_sort(list3, 0, size3 - 1);
}
void quick_sort(int *x, int low, int high) {
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
    int list1[5] = {1,5,16,61,111};
    int list2[4] = {2,4,5,6};
    int list3[9];
    merge (list1,5,list2,4,list3);
    int i = 0;
    for (i = 0; i<9;i++) {
        printf("%d\n", list3[i]);
    }
}

