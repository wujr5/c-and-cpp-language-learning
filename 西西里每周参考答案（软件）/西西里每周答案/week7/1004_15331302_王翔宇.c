    #include <stdio.h>

    int main() {
        char n;
        char str[9]="00000000";
        int i, temp;
        scanf("%d", &n);
        unsigned char nc = n;
        for (i = 7; i >= 0; i--) {
                temp = nc % 2;
                str[i] = temp + '0';
                nc /= 2;
            }
        printf("%s\n", str);
        return 0;
    }