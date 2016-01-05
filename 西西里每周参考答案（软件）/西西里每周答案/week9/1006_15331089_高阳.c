#include<stdio.h>
#include<math.h> 
int main() {
    int n, i, j;
    double a, b, c;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        if(fabs(a + b - c) < 1e-10){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }   
    return 0;
}                                 
