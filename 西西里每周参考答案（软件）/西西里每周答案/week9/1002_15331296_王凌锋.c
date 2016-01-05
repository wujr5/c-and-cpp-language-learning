#include<stdio.h>
double max(float x, float y) {
    float z;
    z = x > y ? x : y;
    return (z);
}
int main(){
    int i, j;
    float a[3][3];
    float max1, max2;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%f", &a[i][j]);
        }
    }
    max1 = max (max (a[0][0], a[1][1]), a[2][2]);
    max2 = max (max (a[0][2], a[1][1]), a[2][0]);
    printf("%.1f %.1f ", max1, max2);
}
