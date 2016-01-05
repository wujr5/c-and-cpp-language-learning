#include<stdio.h>

int main(){
	int i, j, n;
	int num[100][100];
	for(j=0;j<100;j++){
		for(i=0;i<100;i++){
			num[j][i]=0;
		}
	}
	scanf("%d", &n);
	for(j=1;j<=(n+1)/2;j++){
        for(i=j;i<=n-j+1;i++){
		   num[j][i]=num[j][i-1]+1;
        }
	    for(i=j;i<=n-j;i++){
           num[i+1][n-j+1]=num[i][n-j+1]+1;
        }
        for(i=n-j+1;i>j;i--){
	       num[n-j+1][i-1]=num[n-j+1][i]+1;
        }
        for(i=n-j+1;i>=2+j;i--){
	       num[i-1][j]=num[i][j]+1;
        } 
    } 
    for(j=1;j<=n;j++){
    	for(i=1;i<n;i++){
    		printf("%d ", num[j][i]); 
		}
		printf("%d\n", num[j][i]);
	}
	return 0;
}
