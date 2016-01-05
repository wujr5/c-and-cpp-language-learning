#include<stdio.h>
int max(long long int a, long long int b) {
    if (a >= b) {
        return a;
    }
    if (a < b) {
        return b;
    }
}
int min(long long int a, long long int b) {
    if (a >= b) {
        return b;
    }
    if (a < b) {
        return a;
    }
}
int gcd(long long int a, long long int b) {
    long long int c, d;
    long long int t;
    c = max(a, b);
    d = min(a, b);
    if (c % d == 0) {
        return d;
    }else {
        c = c % d;
        t = gcd(c, d);
    }
}
int main() {
    long long int a, b, c;
    while(scanf("%lld", &a) != EOF) {
        scanf("%lld", &b);
        c = gcd(a, b);
        printf("%lld\n", c);
    }
}
