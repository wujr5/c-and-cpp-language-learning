#include <stdio.h>
#include <string.h>

int main() {
    char a[501], b[501], s[1002];
    while (scanf("%s", s) != EOF) {
        int length = strlen(s);
        int i = 0, flag = 1, k = 0, q = 0;
        while (s[i] != '\0') {
            if (flag == 1) {
                a[k] = s[i];
                k++;
            } else {
                b[q] = s[i];
                q++;
            }
            flag *= -1;
            i++;
        }
        a[k] = b[q] = '\0';
        printf("%s,%s\n", a, b);
    }
    return 0;
}
