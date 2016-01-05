#include<stdio.h>
int main(){
	int i,N,a; 
	double E,D,sum,sum2;
	sum=0;
	sum2=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a);
		sum=sum+a;
		sum2=sum2+a*a;		
	}
	E=(double)sum/N;
	D=(double)sum2/N-(double)E*E;
	printf("%.2lf %.2lf\n",E,D);
}
