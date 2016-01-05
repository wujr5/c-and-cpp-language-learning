#include<stdio.h>
#include<math.h>
int main() {
    int a[1000];
    int i, j, n;
    scanf("%d", &n);
    a[0] = 1;
    for (i = 1; i < 1000; i++) {
        a[i] = 0;
    }
    for (i = 0; i< n; i++) {
        for (j = 999; j>= 0; j--){
            a[j] = a[j] * 3;
            if(a[j] > 19) {
                a[j] = a[j] -20;
                a[j + 1] = a[j + 1] + 2;
            }
            if(a[j] > 9 && a[j] <= 19) {
                a[j] = a[j] - 10;
                a[j + 1] = a[j + 1] + 1;
            }
        }
        for (j = 0; j < 1000; j++) {
        if(a[j] > 9 && a[j] <= 19) {
                a[j] = a[j] - 10;
                a[j + 1] = a[j + 1] + 1;
            }
    }
    }
    j = 999;
    do {
        j--;
    }while (a[j] == 0);
    for(i = j; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
}
