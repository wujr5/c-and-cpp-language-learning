#include<stdio.h>
int isSorted(const int list[], int size) {
    int i = 0;
    for (i = 0; i < size - 1; i++) {
        if(list[i] > list[i + 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int list[10] = {1, 1, 3, 4,6,5,7,9,11,21};
    int a = isSorted(list,10);
    printf("%d", a);
}
