#include<stdio.h>
int main() {
    const float fahrenheit = 72.0;
    float celsius;
    
    celsius = (fahrenheit - 32) * (5.0 / 9);
    printf("%.4f\n", celsius);
    return 0;
}                                 
