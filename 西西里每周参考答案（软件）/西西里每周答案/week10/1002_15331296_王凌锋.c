#include<stdio.h>
#include<string.h>
int main() {
    int i, j, shu1, shu2, shu;
    char s[12];
    while (scanf("%s", s) != EOF) {
        j = 0;
        shu1 = 0;
        shu2 = 0;
        int len = strlen(s);
        for (i = 0; i < len; i++) {
            if (s[i] == '+' || s[i] == '-') {
                break;
            }
            j++;
        }
        for (i = 0; i < j; i++) {
            shu1 = shu1*10 + s[i]-48;
        } 
        for (i = j+1; i < len; i++) {
            shu2 = shu2*10 + s[i]-48;
        }
        switch (s[j]) {
            case '+': shu = shu1 + shu2;break;
            case '-': shu = shu1 - shu2;break;
        }
        printf("%d\n", shu);
    }
}
