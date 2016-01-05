#include <stdio.h>

int sumDigits(unsigned int n) {
    int sum = 0, temp;
    while (n) {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int main() {
    int i = sumDigits(234);
    printf("%d\n", i);
    return 0;
}
