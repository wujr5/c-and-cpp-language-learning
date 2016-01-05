#include<stdio.h>
int main(){
	int A,B;
	scanf("%d%d",&A,&B);
	for(A;A<=B;A++){
		if(A%2==1){
			printf("%d\n",A);
		}
	}
}
