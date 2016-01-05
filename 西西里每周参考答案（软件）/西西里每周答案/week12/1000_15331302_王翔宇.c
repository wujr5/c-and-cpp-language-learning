#include <stdio.h>

int grade(int score) {
    return (score - 50) / 10;
}
int main() {
    int i, num;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        printf("%d ", grade(num));
    }
    return 0;
}
