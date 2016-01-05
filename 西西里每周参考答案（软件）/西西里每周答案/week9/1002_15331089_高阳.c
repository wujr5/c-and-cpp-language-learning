#include<stdio.h>
int main() {
    float num[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &num[i][j]);
        }
    float max_1 = num[0][0];
    for(i = 0; i < 3; i++){
        if(num[i][i] > max_1){
            max_1 = num[i][i];
        }
    }
    printf("%.1f ", max_1);
    float max_2 = num[0][2];
    for(j = 0; j < 3; j++){
        if(num[j][2 - j] > max_2){
            max_2 = num[j][2 - j];
        }
    }
    printf("%.1f ", max_2);
}
return 0;
}                                 
