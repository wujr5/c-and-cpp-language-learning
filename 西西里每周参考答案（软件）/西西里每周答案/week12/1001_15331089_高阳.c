#include<stdio.h>
int main() {
int t, n;
int i, j;
double a[100], ave;
scanf("%d", &t);
for(i = 0; i < t; i++){
    scanf("%d", &n);
    for(j = 0; j < n; j++){
        scanf("%lf", &a[j]);
    }
    int count = 0;
    double sum = 0;
    double *p = a;
    for(p = a; p < (a + n); p++){
        sum = sum + *p;
    }
    ave = sum / n;
    for(p = a; p < (a + n); p++){
        if(*p > ave){
            count += 1;
        }
    }
    printf("%d\n", count);
}
return 0;
}                                 
