#include <stdio.h>
#include <stdlib.h>

int *count(const char * const s) {
    int i;
    int *cnt = (int *)malloc(sizeof(int) * 10);
    for (i = 0; i < 10; *(cnt + (i++)) = 0);
    i = 0;
    while (*(s + i) != '\0') {
        if (*(s + i) >= '0' && *(s + i) <= '9') {
            (*(cnt + (*(s + i) - '0')))++;
        }
        i++;
    }
    return cnt;
}

int main() {
    char *s = "1232334999";
    int *p = count(s);
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", *(p + i));
    return 0;
}
