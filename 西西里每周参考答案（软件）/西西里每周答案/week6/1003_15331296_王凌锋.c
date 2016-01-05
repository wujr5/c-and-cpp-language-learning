#include<stdio.h>
int main(){
	int a,sum;
	sum=0;
	scanf("%d",&a);
	while(a!=-1){
	switch(a){
		case 1:sum=sum+6;break;
		case 2:sum=sum+8;break;
		case 3:sum=sum+12;break;
		case 4:sum=sum+3;break;
		case 5:sum=sum+9;break;
	}
	scanf("%d",&a);
	} 
	printf("%d",sum);
}
