#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        double a, b, c;
        scanf("%lf%lf%lf", &a, &b, &c);
        printf("%s\n", (fabs(a + b - c) <= 1e-6) ? "Yes" : "No");
    }
    return 0;
}
