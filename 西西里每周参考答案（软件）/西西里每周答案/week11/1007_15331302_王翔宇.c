#include <stdio.h>

int isSorted(const int list[], int size);

int main() {
    int num[] = {1, 1, 3, 4, 4, 5, 7, 9, 11, 21};

    printf("%d\n", isSorted(num, 10));
    return 0;
}

int isSorted(const int list[], int size) {
    int i = 0;
    for (i = 0; i < size - 1; i++)
        if (list[i] > list[i + 1])
            return 0;
    return 1;
}
