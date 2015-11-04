#include<stdio.h>
#include<string.h>
int main() {
    char s[10000];
    int i;
    for (i = 1; i <= 6; ++i) {
    scanf("%s", &s);
    printf("%s", s);
    if(i <= 5) printf(" ");
}
     printf("\n");
    return 0;
}
