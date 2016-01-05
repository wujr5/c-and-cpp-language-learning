#include<stdio.h>
#include<string.h>
int main(){
	int N,b,c,f,i,sum,max,sumall;
	char a1[21],a2[22],d,e;
	sum=0;
	sumall=0;
	max=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%s%d%d %c %c%d",&a1,&b,&c,&d,&e,&f);
		if((b>80)&&(f>0)){
			sum=sum+8000;
		}
		if(b>85&&c>80){
			sum=sum+4000;
		}
		if(b>90){
			sum=sum+2000;
		}
		if(b>85&&e=='Y'){
			sum=sum+1000;
		}
		if(c>80&&d=='Y'){
			sum=sum+850;
		}
		sumall=sumall+sum;
		if(sum>max){
			strncpy(a2,a1, 21);
			max=sum;			
		}
		sum=0;
	}
	printf("%s\n%d\n%d\n",a2,max,sumall);
}
