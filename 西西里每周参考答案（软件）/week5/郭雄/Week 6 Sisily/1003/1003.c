#include<stdio.h>
int main() {
	int n, sum = 0;
	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		switch (n) {
		case 1: sum+= 6; break;
		case 2: sum+= 8; break;
		case 3: sum+= 12; break;
		case 4: sum+= 3; break;
		case 5: sum+= 9; break;
	}
}
	printf("%d", sum);
	return 0;
}
