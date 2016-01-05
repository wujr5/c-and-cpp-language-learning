    #include <stdio.h>

    int main() {
        int t = 2992, t1;
        int sum16, sum12, sum10;
        for (t = 2992; t < 10000; t++) {
            sum16 = 0;
            sum12 = 0;
            sum10 = 0;
            t1 = t;
            while (t1 > 0) {
                sum16 += t1 % 16;
                t1 /= 16;
            }
            t1 = t;
            while (t1 > 0) {
                sum12 += t1 % 12;
                t1 /= 12;
            }
            t1 = t;
            while (t1 > 0) {
                sum10 += t1 % 10;
                t1 /= 10;
            }
            if (sum16 == sum12 && sum12 == sum10) printf("%d\n", t);
        }
        return 0;
    }