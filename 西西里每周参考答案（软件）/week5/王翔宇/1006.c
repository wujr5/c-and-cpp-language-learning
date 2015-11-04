#include <stdio.h>

int main() {
    float x, y;
    scanf("%f", &x);
    if (x < -1.0) y = x + 1.0;
    else if ((x >= -1.0) && (x < 1.0)) y = fabs(x);
    else if (x >= 1.0) y = log10(x);
    printf("%.2f\n", y);
    return 0;
}