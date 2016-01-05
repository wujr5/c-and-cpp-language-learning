#include <stdio.h>

int smallestElement(int *array, int size) {
    int min = 0, i;
    for (i = 0; i < size; i++) {
        if (*(array + i) < *(array + min))
            min = i;
    }
    return *(array + min);
}

int main() {
    int num[] = {3, 5, 1, 2, 76, 1, 3};
    int m = smallestElement(num, 7);
    printf("%d\n", m);
    return 0;
}
