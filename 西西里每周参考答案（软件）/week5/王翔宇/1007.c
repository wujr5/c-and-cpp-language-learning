#include <stdio.h>

int main() {
    int y, day;
    scanf("%d", &y);
    day = ((y - 2000) + ((y - 2000 -1 ) / 4)) % 7;
    printf("%d\n", day);
    return 0;
}