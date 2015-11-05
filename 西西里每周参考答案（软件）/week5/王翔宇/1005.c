#include <stdio.h>

int main() {
    int a;
    float score;
    if (!((a >= 0) && (a <= 100))) {
        printf("Invalid\n");
        return 0;
    }
    if (a < 60) {
        printf("Failed\n");
        return 0;
    }
    score = (float)(a - 50) / 10;
    printf("%.1f\n", score);
    return 0;
}