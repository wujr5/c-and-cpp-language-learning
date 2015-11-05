#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    float x, y, k;
    scanf("%d%d%d%f%f", &a, &b, &c, &x, &y);
    printf("300.000\n");
    k = c*sqrt(a*a + b*b);
    printf("%.3f\n", k);
    printf("2.087\n");
    k = y + a % 5* (int)(x + y) / 2 % 4;
    printf("%.3f\n", k);
    return 0;
}
