#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, ans = 0;
    scanf("%f%f%f", &a, &b, &c);
    b/= 1200;
    c*= 12;
    ans = a*pow((1 + b), c);
    printf("%.2f\n", ans);
    return 0;
}                                 
