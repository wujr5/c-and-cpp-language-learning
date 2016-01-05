#include<stdio.h>
int main(){
	int M,N,i;
	char a[9];
	a[8]='\0';
	scanf("%d",&N);
	if(N>=0){
		M=N;
		for(i=7;i>=0;i--){
			if(M%2==1){
				a[i]='1';
			}
			else{
				a[i]='0';
			}
			M=M/2;
		}
		printf("%s\n",a);
	}
	else if(N<0){
		M=N+256;
		for(i=7;i>=0;i--){
			if(M%2==1){
				a[i]='1';
			}
			else{
				a[i]='0';
			}
			M=M/2;
		}
		printf("%s\n",a);
	}
} 
