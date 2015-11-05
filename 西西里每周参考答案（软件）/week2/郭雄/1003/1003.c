#include<stdio.h>
int main() {
    int n, first, second, third;
    scanf("%d", &n);
    first = n/100;
    second = n/10%10;
    third = n%10;
    printf("%d\n", first+second+third);
    return 0;
}
