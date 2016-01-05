#include <stdio.h>
#include <string.h>

int indexOf(const char *s1, const char *s2) {
    int len1 = strlen(s1), len2 = strlen(s2), i = 0, j;
    while (i + len1 <= len2) {
        j = 0;
        while (*(s2 + i + j) == *(s1 + j)) j++;
        if (j == len1) return i;
        ++i;
    }
    return -1;
}

int main() {
    char *s = "abcdefg";
    char *d = "abcdefg";
    int m = indexOf(d, s);
    printf("%d\n", m);
    return 0;
}
