#include<stdio.h>
int main() {
	int n, i, j, b, sum;
	int a[10][10], d[10][10], c[10][10];
	while(scanf("%d", &n) != EOF){
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &d[i][j]);
			}
		}
		sum = 0;
		for(i = 0; i < n; i++){
			for(j = 0; j < n;j++){
				for(b = 0; b < n;b++){
					sum += a[i][b]*d[b][j];	
				}
				c[i][j] = sum;
				sum = 0;
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n - 1; j++){
				printf("%d ", c[i][j]);
			}
			printf("%d", c[i][n - 1]);
			printf("\n");
		}	
	}
	return 0;	
} 
