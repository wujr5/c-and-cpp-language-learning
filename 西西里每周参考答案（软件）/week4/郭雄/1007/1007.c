#include<stdio.h>
int main() {
    int n, k = -1, i = 1;
    scanf("%d", &n);
    while (k < 0) {
        scanf("%d", &k);
        ++i;
    }
    printf("%d", k);
    for (; i <= n; ++i){
        scanf("%d", &k);
        if (k > 0) printf(" %d", k);
    }
    printf("\n");
    return 0;
}                                 
