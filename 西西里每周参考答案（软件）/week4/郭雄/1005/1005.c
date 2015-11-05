#include<stdio.h>
int main() {
    float interest;
    float sum = 0, k;
    int i;
    scanf("%f%f", &k, &interest);
    interest = interest/1200.0;
    for(i = 1; i <= 6; ++i) {
      sum+= k;
      sum+= sum*interest;    
      }
    printf("%.2f\n", sum);
    return 0;
}                                 
