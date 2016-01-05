#include<stdio.h>
int main(){
	int a,i,b;
	scanf("%d",&a);
	if(a!=1&&a!=2){
	for(i=2;i<a;i++){
		b=a%i;
		if(b==0){
			printf("No\n");
			break;
		}
		if(i==a-1&&b!=0){
			printf("Yes\n");
			break;
		}
	}
}
    else if(a==2){
    	printf("Yes\n");
	}
	else if(a==1){
    	printf("No\n");
	}
} 
