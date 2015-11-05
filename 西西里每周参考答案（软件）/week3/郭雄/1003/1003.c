#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, xmin, xmax;
    scanf("%f%f%f", &a, &b, &c);
    xmin = (-b-sqrt(b*b-4*a*c))/(2*a);
    xmax = (-b+sqrt(b*b-4*a*c))/(2*a);
    printf("%.3f %.3f\n", xmin, xmax);
    return 0;
}
