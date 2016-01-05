#include<stdio.h>
int main(){
	int i,j,a[20];
	for(i=0;i<20;i++){
		scanf("%d",&a[i]);
		if(i==0){
			printf("%d ",a[i]);
		}
		else{
			for(j=0;j<i;j++){
				if(a[i]==a[j]){
					break;
				}
				else if(j==i-1&&a[i]!=a[j]){
					printf("%d ",a[i]);
				}
			}
		}
	}
}
