#include<stdio.h> 
#include<string.h>
#include<math.h>
int main() {
char x[10];
int i, p, m, n, m1, m2;
int result;
	while(scanf("%s", x) != EOF){
		int len = strlen(x);
		for (i = 0; i < len; i++){
			if(x[i] == '+' || x[i] == '-')
				p = i;
	}
	int sum1 = 0;
	for (m = 0; m < p; m++){
		m1 = p - 1 - m;
		sum1 += (x[m] - '0') * pow(10, m1);
	}
	int sum2 = 0;
	for (n = p + 1; n <= 2 * p; n++){
		m2 = 2 * p - n;
		sum2 += (x[n] - '0') * pow(10, m2);
	}
	if(x[p] == '+')
		result = sum1 + sum2;
	if(x[p] == '-')
		result = sum1 - sum2;
		printf("%d\n", result);
}
return 0;
}
