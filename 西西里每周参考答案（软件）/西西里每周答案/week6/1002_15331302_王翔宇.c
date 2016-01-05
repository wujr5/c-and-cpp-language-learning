#include <stdio.h>

int main() {
    int n, score;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &score);
        if ((score < 0) || (score > 100)) {
            printf("error\n");
            n--;
            continue;
        }
        if (score < 60) {
            printf("E\n");
            n--;
            continue;
        }
        switch (score / 10) {
            case 10:
            case 9:{printf("A\n");break;}
            case 8:{printf("B\n");break;}
            case 7:{printf("C\n");break;}
            case 6:{printf("D\n");break;}
        }
        n--;
    }
    return 0;
}