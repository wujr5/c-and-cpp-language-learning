#include<stdio.h>
int sumDigits(unsigned int n) {
    unsigned int m = n;
    int i = 0, sum = 0;
    unsigned int l = 1;
    while (m >= 1) {
        i++;
        l = l * 10;
        sum = (n % l) * 10 / l + sum;
        m = m / 10;
    }
    return sum;
}
int main(){
    unsigned int b, a;
    scanf("%d", &b);
    a = sumDigits(b);
    printf("%d", a);
}

