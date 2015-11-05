#include<stdio.h>
#include<math.h>
float f(float x) {
    if (x < -1) return (x+1);
    else if (x < 1) return fabs(x);
    else return log10(x);
}
int main() {
    float x;
    scanf("%f", &x);
    printf("%.2f\n", f(x));
    return 0;
}                                 
