#include <stdio.h>

float value(float moneysaved, float ratemonth, int j);

int main() {
    int i;
    float moneysaved, rateannual, ratemonth, out = 0;
    scanf("%f%f", &moneysaved, &rateannual);
    ratemonth = rateannual / 12 / 100;
    out = value(moneysaved, ratemonth, 6);
    printf("%.2f\n", out);
    return 0;
}

float value(float moneysaved, float ratemonth, int j) {
    if (j == 1) return moneysaved * (1 + ratemonth);
    return (moneysaved + value(moneysaved, ratemonth, j-1))
            * (1 + ratemonth);
}