#include<stdio.h>
#include<string.h>
int main() {
    int i, j, N, M;
    while (scanf("%d%d",&N, &M) != EOF) {
        char a[N][M+1];
        for (i = 0; i < N; i++) {
            scanf("%s", a[i]);
        }
        for (i = 0; i < N; i++) {
            for (j = M-1; j >= 0; j--) {
                if (a[i][j] != 'b'){
                    printf("%c", a[i][j]);
                }
                if (a[i][j] == 'b'){
                    printf("d");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
