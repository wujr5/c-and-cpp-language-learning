#include<stdio.h>
int main(){
    int i,j,m,n;
    do {
        scanf("%d", &n);
        if (n != 0) {
            m=n;
            int a[m][n], b[m][n], c[m][n];
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++){
                    scanf("%d", &a[i][j]);
                }
            }
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++){
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++){
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++){
                    printf("%d", c[i][j]);
                    if (j!=n-1){
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    } while (n != 0);
}
