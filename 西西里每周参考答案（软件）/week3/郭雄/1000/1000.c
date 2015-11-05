#include<stdio.h>
char s;
void out() {
    int i;
    for (i = 1; i <= 4; ++i)
      printf("%c", s);
    printf("\n");
}
int main() {
    scanf("%c", &s);
    printf("   "); out();
    printf("  "); out();
    printf(" "); out();
    out();
    return 0;
}
