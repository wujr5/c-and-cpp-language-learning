#include<stdio.h>
int main() {
    long n, i;
    double x, Ex = 0, Ex2 = 0, Dx;
    scanf("%ld", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%lf", &x);
        Ex+= x/n; Ex2+= x*x/n;
    }
    Dx = Ex2-Ex*Ex;
    printf("%.2lf %.2lf\n", Ex, Dx);
    return 0;
}                                 
