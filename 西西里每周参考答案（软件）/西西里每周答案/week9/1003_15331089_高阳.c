#include<stdio.h>
int main() {
	int n, i, j;
	int num_1[10][10], num_2[10][10], num_3[10][10];
		scanf("%d", &n);
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					scanf("%d", &num_1[i][j]);
				}
			}
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					scanf("%d", &num_2[i][j]);
				}
			}	
			for(i = 0; i < n; i++){
				for(j = 0;j < n - 1;j++){
					num_3[i][j] = num_1[i][j] + num_2[i][j];
					num_3[i][n - 1] = num_1[i][n - 1] + num_2[i][n - 1];
					printf("%d ", num_3[i][j]);		
				}
				printf("%d", num_3[i][n - 1]);
				printf("\n");
			}
	return 0; 	
} 
