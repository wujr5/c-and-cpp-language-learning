    #include <stdio.h>

    int main() {
        int i, t, a[10];
        scanf("%d", &t);
        while (t > 0) {
            int n;
            char c[2];
            for (i = 0; i < 10; a[i++] = 0);
            scanf("%d", &n);
            while (n > 0) {
                scanf("%s", c);
                a[c[0] - '0']++;
                n--;
            }
            for (i = 0; i < 10; i++) {
                if (a[i] != 0)
                    printf("%d %d\n", i, a[i]);
            }
            t--;
        }
        return 0;
    }