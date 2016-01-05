#include<stdio.h>

int grade(const int a) {
    if (a < 60) {
        return 0;
    }
    if (a >= 60 && a < 70) {
        return 1;
    }
    if (a < 80 && a >= 70) {
        return 2;
    }
    if (a < 90 && a >= 80) {
        return 3;
    }
    if (a > 90) {
        return 4;
    }
}

int main() {
    int i, a[5], b[5];
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        b[i] = grade(a[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
}
