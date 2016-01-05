#include<stdio.h>

int * count(const char * const s) {
    int i;
    static int a[10];
    for (i = 0; i < 10; i++) {
        a[i] = 0;
    }
    for (i = 0; *(s + i) != '\0'; i++) {
        switch ( *(s + i)) {
            case '0': a[0]++;break;
            case '1': a[1]++;break;
            case '2': a[2]++;break;
            case '3': a[3]++;break;
            case '4': a[4]++;break;
            case '5': a[5]++;break;
            case '6': a[6]++;break;
            case '7': a[7]++;break;
            case '8': a[8]++;break;
            case '9': a[9]++;break;
            default: break;
        }
    }
    return a;
}

int main() {
    int *counts = count("12203AB3");
    printf("%d", counts[2]);
}
