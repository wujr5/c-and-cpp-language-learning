#include<stdio.h>
int main(){
	int j,i,a;
	scanf("%d",&j);
	for(i=0;i<j;i++){
		scanf("%d",&a);
		if(a<=100&&a>=90){
			printf("A\n");
		}
		else if(a<=89&&a>=80){
			printf("B\n");
		}
		else if(a<=79&&a>=70){
			printf("C\n");
		}
		else if(a<=69&&a>=60){
			printf("D\n");
		}
		else if(a<=59&&a>=0){
			printf("E\n");
		}
		else{
			printf("error\n");
		}
	}
} 
