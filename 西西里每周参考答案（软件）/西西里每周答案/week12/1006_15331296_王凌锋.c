#include<stdio.h>

int countLetters(const char * const str) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    return count;
}
