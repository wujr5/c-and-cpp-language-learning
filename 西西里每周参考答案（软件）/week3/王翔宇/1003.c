#include <stdio.h>

int main() {
    float a, b, c, delta, sol1, sol2;
    scanf("%f%f%f",&a, &b, &c);
    delta = b * b - 4 * a * c;
    sol1=(b * (-1) - sqrt(delta)) / (a * 2);
    sol2=(b * (-1) + sqrt(delta)) / (a * 2);
    printf("%.3f %.3f\n",sol1, sol2);
    return 0;
}