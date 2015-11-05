#include<stdio.h>
int main() {
    float x, score;
    scanf("%f", &x);
    if (x < 0 || x > 100) score = -1;
    else if (x < 60) score = 0;
         else score = (x-50)/10;
    if (score == -1) printf("Invalid\n");
    else if (score == 0) printf("Failed\n");
         else printf("%.1f\n", score);
    return 0;
    
}                                 
