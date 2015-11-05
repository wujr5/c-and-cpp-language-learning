#include<stdio.h>
int main() {
    short a;
    unsigned short k;
    int b; 
    unsigned int c;
    long d;
    unsigned long e; 
    float f;
    double g; 
    long double h;
    printf("%d ", sizeof(a));
    printf("%d ", sizeof(k));
    printf("%d ", sizeof(b));
    printf("%d ", sizeof(c));
    printf("%d ", sizeof(d));
    printf("%d ", sizeof(e));
    printf("%d ", sizeof(f));
    printf("%d ", sizeof(g));
    printf("%d\n", sizeof(h));
    return 0;
}                                 
