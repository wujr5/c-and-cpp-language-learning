#include <stdio.h>
#include <stdlib.h>

int *doubleCapacity(int *list, int size);

int main() {
    int list[5] = {1, 2, 3, 4, 5};
    int *newlist = doubleCapacity(list, 5);
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", *(newlist + i));
    return 0;
}

int *doubleCapacity(int *list, int size) {
    int *p = (int *)malloc(size * sizeof(int) * 2);
    int i = 0;
    for (i = 0; i < size; i++)
        *(p + i) = *(list + i);
    for (; i < 2 * size; i++)
        *(p + i) = 0;
    return p;
}


/*int *doubleCapacity(int *list, int size) {
    int p[size * 2], i;
    for (i = 0; i < 2 * size; p[i++] = 0);
    for (i = 0; i < size; i++) {
        *(p + i) = *(list + i);
        printf("%d ", *(p + i));
    }
    puts("");
    for (; i < 2 * size; i++) {
        *(p + i) = 0;
        printf("%d ", *(p + i));
    }
    puts("");
    int *dc = p;
    return dc;
}*/
