#include<stdio.h>
#include<math.h>
int isprime(long n) {
    int i, flag = 1;
    if (n == 2) return 1;
    if (n == 1) return 0;
    for (i = 2; i <= floor(sqrt(n)); ++i)
      if (n%i == 0) flag = 0;
      return flag;
    }
int main() {
    int n;
    scanf("%d", &n);
    if (isprime(n)) printf("Yes\n");
    else printf("No\n");
    return 0;
}                                 
