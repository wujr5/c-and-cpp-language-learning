#include<stdio.h>
int main() {
	int max = 0, min = 32767, n, i, t;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		scanf("%d", &t);
		if (t > max) max = t;
		if (t < min) min = t;
	}
	printf("%d %d\n", max, min);
	return 0;
} 
