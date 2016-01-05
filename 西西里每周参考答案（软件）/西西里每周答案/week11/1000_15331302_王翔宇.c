#include <stdio.h>

static int a;
void add2();
void minus1();

int main() {
    scanf("%d", &a);
    add2();
    minus1();
    printf("%d", a);
    return 0;
}

void add2() {
    a+=2;
}
void minus1() {
    a-=1;
}
