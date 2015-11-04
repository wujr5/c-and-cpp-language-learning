#include<stdio.h>
#include<math.h>
int main() {
    int n, i, j, s, num, count;
    scanf("%d", &n);
    i = pow(10, n-1);
    j = pow(10, n);
    for (; i < j; ++i) {
        num = i; count = -1; s = 0;
        while (num > 0) {
            s+= pow(num%10, n);
            num/= 10; 
        }
        if (s == i) printf("%d\n", i);
    }
    return 0;
}                                 
