#include <stdio.h>

int main() {
    char a[4];
    gets(a);
    printf("%c%c%c\n", a[0] - 32, a[1] - 32, a[2] - 32);
    return 0;
}