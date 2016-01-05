#include <stdio.h>

void prt(int u);

int main() {
    int n;
    while (~scanf("%d", &n)) {
        prt(n);
    }
    return 0;
}

void prt(int u) {
    int temp, i = 16;
    char sum[17];
    if (u < 0) u += 65536;
    while (i-- >= 0) {
        temp = u % 2;
        sum[i] = temp + 48;
        u /= 2;
    }
    sum[16] = 0;
    puts(sum);
}
