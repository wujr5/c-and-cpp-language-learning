#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i;
    while (scanf("%s", s)!=EOF){
        int len = strlen(s);
        for(i = 0; i < len; i++) {
            if (i % 2 == 0) {
                printf("%c", s[i]);
            }
        }
        printf(",");
        for(i = 1; i < len; i++) {
            if (i % 2 == 1) {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
