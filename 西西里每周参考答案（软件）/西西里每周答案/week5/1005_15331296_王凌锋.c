#include<stdio.h>
int main(){
	int a;
	float b,c;
	scanf("%d",&a);
	if(a>=60&&a<=100){
		b=(a-60.0)/10.0;
		c=b+1.0;
		printf("%.1f\n",c);
	}
	else if(a<60&&a>=0){
		printf("Failed\n");
	}
	else{
		printf("Invalid\n");
	}
	return 0;
}
