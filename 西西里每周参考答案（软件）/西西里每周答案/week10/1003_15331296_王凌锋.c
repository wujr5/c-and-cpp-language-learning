#include<stdio.h>
#include<string.h>
int main() {
    char a[50][100], b[50][100], c[50][100];
    int i, N, k, j, l;
    scanf("%d", &N);
    j = 0;
    l = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &k);
        if (k == 1) {
            scanf("%s", a[j]);
            j++;
        }else if (k == 2) {
            scanf("%s", b[l]);
            strcpy(c[l],a[j-1]);//必须是j-1，因为前面已经复制j++ 
            l++;
            j--;
        }
    }
    for (i = 0; i < N / 2; i++) {
        printf("%s %s\n", b[i], c[i]);
    }
}
