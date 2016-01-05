#include<stdio.h>
int main(){
	int i,j,k,n,m;
	int a[n][m];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			if(j==0){
				printf("%d",a[i][j]);
			}
			else{
				for(k=0;k<j;k++){
					if(a[i][j]==a[i][k]){
						break;
					}
					else if(k==j-1&&a[i][k]!=a[i][j]){
						printf(" %d",a[i][j]);
					}
				}
			}
		}
		printf("\n");
	}
}
