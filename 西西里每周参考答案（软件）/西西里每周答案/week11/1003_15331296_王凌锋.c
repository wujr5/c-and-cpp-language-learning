#include<stdio.h>
void binary(int *a, int n) {
    int i;
    for (i = 0; i < 16; i++) {
        a[i] = (n % 2);
        n = n / 2;
    }
}
int main() {
    int n, i;
    while (scanf("%d", &n) != EOF) {
        int a[16];
        if (n >= 0) {
            binary(a, n);
            for (i = 15; i >= 0; i--) {
                printf("%d", a[i]);
            }
            printf("\n");
        }else {
            n = -n;
            binary(a, n);
            for (i = 0; i < 16; i++) {
                a[i]= 1 - a[i];
            }
            if (a[0] == 0) {
                a[0] = a[0] + 1;
            }
            else if (a[0] == 1) {
                for (i = 0; a[i] == 1; i++) {
                    a[i] = 0;
                }
                a[i] = 1;
            }
            for (i = 15; i >= 0; i--) {
                printf("%d", a[i]);
            }
            printf("\n");
        }
        
    }
}
