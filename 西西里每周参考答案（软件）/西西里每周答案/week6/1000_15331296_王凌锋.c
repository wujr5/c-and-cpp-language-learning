#include<stdio.h>
int main(){
	int i,j,max,min,a;
	scanf("%d",&j);
	for(i=0;i<j;i++){
		scanf("%d",&a);
		max=a;
		min=a;
		i=i+1;
		break;
	}
	for(i;i<j;i++){
		scanf("%d",&a);
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}
	printf("%d",max);
	printf(" %d\n",min);
	return 0;
} 

