#include<stdio.h>
int main() {
    int num[3][3], a[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &num[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            a[j][i] = num[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}                                 
