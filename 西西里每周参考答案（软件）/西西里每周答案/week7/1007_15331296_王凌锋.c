#include<stdio.h>
int main(){
	int i,j,max,maxshu,min,second,N,T,difference;
	int a[10000];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		for(j=0;j<N;j++){
			scanf("%d",&a[j]);
		}
		max=a[0];
		min=a[0];
		maxshu=0;
		for(j=0;j<N;j++){
			if(a[j]>max){
				max=a[j];
				maxshu=j;
			}
			if(a[j]<=min){
				min=a[j];
			}
		}
		difference=max-min;
		if(N==2){
			printf("%d\n",min);
		}
		else if(difference==0){
			printf("%d\n",a[1]);
		}
		else {
			for(j=0;j<N;j++){
				if(max-a[j]==0&&j!=maxshu){
					second=a[j];
					break;
				}
				else if(max-a[j]<difference&&j!=maxshu&&max-a[j]!=0){
					difference=max-a[j];
					second=a[j];
			}
		}
		printf("%d\n",second);
	}
	}
}
