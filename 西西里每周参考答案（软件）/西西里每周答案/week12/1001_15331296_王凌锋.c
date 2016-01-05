#include<stdio.h>

float average (const float a[], int n) {
    int i = 0; 
    float sum = 0;
    for (i; i < n; i++) {
        sum = sum + a[i];
    }
    return sum / n;
}

int above (const float a[], int n, float average) {
    int i = 0, j = 0;
    for (i; i < n; i++) {
        if (a[i] > average) {
            j++;
        }
    }
    return j;
}

int main() {
    int m, n, i, j;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &n);
        float a[n];
        for (j = 0; j < n; j++) {
            scanf("%f", &a[j]);
        }
        float b = average (a, n);
        int c = above(a, n, b);
        printf("%d\n", c);
    }
}
