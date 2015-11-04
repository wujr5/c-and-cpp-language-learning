#include <stdio.h>

int main() {
    printf("%d %d %d %d %d %d %d %d %d\n",
        sizeof(short), sizeof(unsigned short),
        sizeof(int), sizeof(unsigned int), sizeof(long),
        sizeof(unsigned long), sizeof(float),
        sizeof(double), sizeof(long double));
    return 0;
}