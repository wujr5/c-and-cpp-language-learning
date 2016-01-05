#include <stdio.h>

void calc(int n);

int main() {
    int n;
    scanf("%d", &n);
    calc(n);
    return 0;
}

void calc(int n) {
    char sum[1000];
    int i, j;
    for (i = 0; i < 1000; sum[i++] = '0');
    sum[0] = '1';
    int carryIn = 0, temp = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            temp = (sum[j] - '0') * 3 + carryIn;
            sum[j] = temp % 10 + '0';
            carryIn = temp / 10;
        }
    }
    i = n / 2 + 1;
    while (sum[--i] == '0');
    for (i; i >= 0; --i) printf("%c", sum[i]);
    puts("");
}
/*
    给定整型的底数和指数，做高精度幂运算。
    设指数为n，复杂度为O(n2)
    计算的位数限制由定义的数组长度决定。
*/
