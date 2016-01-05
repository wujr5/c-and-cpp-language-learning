#include <stdio.h>

int main() {
    float num[3][3];
    int max1 = 0, max2 = 0, i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &num[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        if (num[i][i] > num[max1][max1])
            max1 = i;
        if (num[2 - i][i] > num[2 - max2][max2])
            max2 = i;
    }
    printf("%.1f %.1f ", num[max1][max1], num[2 - max2][max2]);
}
