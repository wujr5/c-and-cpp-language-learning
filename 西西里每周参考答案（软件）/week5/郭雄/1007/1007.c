#include<stdio.h>
int main() {
    long year, day, x, i;
    scanf("%ld", &year);
    day = (year-2001)/4 + (year-2001)*365;
    x = year-2000+(year-2000)/4;
    printf("%ld\n", (day+1)%7);
    return 0;
}                                 
