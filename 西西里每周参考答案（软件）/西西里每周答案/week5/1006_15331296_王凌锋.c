#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	scanf("%f",&a);
	if (a<-1){
	    b=a+1;
	    printf("%.2f\n",b);
	}
	else if(a>=1){
		b=log10(a);
		printf("%.2f\n",b);
	}
	else{
		b=fabs(a);
		printf("%.2f\n",b);
	}
	return 0;
}
