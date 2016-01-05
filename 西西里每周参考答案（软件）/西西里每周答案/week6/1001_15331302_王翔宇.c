#include <stdio.h>

int main() {
    int n, year;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &year);
        if (year % 400 == 0) {
            printf("%d leap year\n", year);
        }else if ((year % 4 == 0) && (year % 100 != 0)) {
            printf("%d leap year\n", year);
        }else printf("%d common year\n", year);
        n--;
    return 0;
}