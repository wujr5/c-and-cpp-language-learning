#include<stdio.h>
int main(){
	int i,m,n,a[10],l;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		}
	for(m=0;m<9;m++){
		for(n=0;n<9-m;n++){
			if(a[n]>a[n+1]){
				l=a[n];
				a[n]=a[n+1];
				a[n+1]=l;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
