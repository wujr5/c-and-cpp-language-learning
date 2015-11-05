#include <stdio.h>

int main() {
    int a1, b1, a2, b2;
    scanf("%d%d",&a1, &b1);
    scanf("%d%d",&a2, &b2);
    printf("%dx^2+%dx+%d\n",a1 * a2, a1 * b2 + a2 * b1, b1 * b2);
    return 0;
}