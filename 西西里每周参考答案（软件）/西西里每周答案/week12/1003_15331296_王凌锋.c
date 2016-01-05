#include<stdio.h>

int smallestElement(int * array, int size) {
    int i;
    int smallest = *array;
    for (i = 1; i < size; i++) {
        if (*(array + i) < smallest) {
            smallest = *(array + i);
        }
    }
    return smallest;
}
