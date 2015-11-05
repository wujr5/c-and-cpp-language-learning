#include <stdio.h>

int main() {
    float investment_amount, annual_percentage,
            number_of_years, out;
    scanf("%f%f%f", &investment_amount,
        &annual_percentage, &number_of_years);
    float monthly_percentage = annual_percentage / 12.0 / 100;
    out = investment_amount *
        pow((1 + monthly_percentage), (number_of_years * 12));
    printf("%.2f\n", out);
    return 0;
}