#include<stdio.h>

int indexOf(const char *s1, const char *s2) {
    int i, j, k;
    for (i = 0; *(s2 + i) != '\0'; i++) {
        if ( *(s2 + i) == *s1) {
            k = i;
            for (j = 0; *(s1 + j) != '\0'; j++, k++) {
                if ( *(s2 + k) != *(s1 + j)) {
                    break;
                }
            }
            if (*(s1 + j) == '\0') {
            return i;
            }
        }
    }
    return -1;
}
