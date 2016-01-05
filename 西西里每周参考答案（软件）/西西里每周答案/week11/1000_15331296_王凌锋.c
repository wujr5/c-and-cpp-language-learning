#include<stdio.h>
int a;
int minus1(int a) {
    a = a - 1;
    return a;
}
int add2(int a) {
    a= a + 2;
    return a;
}
int main() {
    scanf("%d", &a);
    a = add2(a);
    a = minus1(a);
    printf("%d", a);
}

