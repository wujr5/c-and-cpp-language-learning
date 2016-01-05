#include<stdio.h>
#include<math.h>
int main(){
    int i, T;
    double a, b, c, d;
    scanf("%d", &T);
    for (i = 0; i < T; i++){
        scanf("%lf%lf%lf", &a, &b, &c);
        d = fabs (c - a - b);
        if (d < 0.0000000001){
            printf("Yes\n");
        }else {
            printf("No\n");
        }
    }
}
