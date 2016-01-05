    #include <stdio.h>

    void exch(int a[], int m, int n);

    int main() {
        int a[10], i, j;
        for (i = 0; i < 10; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
                if (a[j] > a[j + 1]) exch(a, j, j + 1);
        for (i = 0; i < 10; i++)
            printf("%d ", a[i]);
        return 0;
    }

    void exch(int a[], int m, int n) {
        int t;
        t = a[m];
        a[m] = a[n];
        a[n] = t;
    }