#include <stdio.h>

int main() {
    char s[12];
    while (scanf("%s", &s) != EOF) {
        int a = 0, b = 0, i = 0, flag = 1;
        while (s[i] >= 48 && s[i] <= 57) {
            a *= 10;
            a += s[i] - 48;
            i++;
        }
        if (s[i++] == '-') flag = -1;
        while (s[i] >= 48 && s[i] <= 57) {
            b *= 10;
            b += s[i] - 48;
            i++;
        }
        printf("%d\n", a + b * flag);
    }
    return 0;
}
