#include<stdio.h>
int main(){
	int i,j,k,m,n;
	int a[m][n],b[10];
	scanf("%d\n",&m);
	for(i=0;i<m;i++){
		scanf("%d\n",&n);
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
		for(k=0;k<10;k++){
			b[k]=0;
			for(j=0;j<n;j++){
				if(k==a[i][j]){
					b[k]=b[k]+1;
				}
			}
			if(b[k]!=0){
				printf("%d %d\n",k,b[k]);
			}
		}
	}
}
