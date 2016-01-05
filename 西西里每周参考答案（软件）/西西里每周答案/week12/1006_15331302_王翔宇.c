#include <stdio.h>


int countLetters(const char * const str) {
    int i = 0, count = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char *s = "ABCDefg211";
    int m = countLetters(s);
    printf("%d\n", m);
    return 0;
}
