#include<stdio.h>
int main() {
    int a1, a2, b1, b2, t1, t0;
    scanf("%d%d", &a1, &b1);
    scanf("%d%d", &a2, &b2);
    if(a1*a2 != 0) printf("%dx^2", a1*a2);
    t1 = a1*b2+a2*b1; t0=b1*b2;
    if(t1 < 0)printf("%dx", t1);
    if(t1 > 0)printf("+%dx", t1);
    if(t0 > 0)printf("+%d", t0);
    else if(t0 < 0) printf("%d", t0);
    printf("\n");
    return 0;      
}
