#include<stdio.h>
int main(){
	int i,m,n,sum10,sum12,sum16;
	for(n=1000;n<10000;n++){
		sum10=0;
		sum12=0;
		sum16=0;
		sum10=n/1000+(n/100)%10+(n/10)%10+n%10;
		m=n;
		while(m!=0){
			sum12=sum12+m%12;
			m=m/12;
				}
		if(sum12==sum10){
			m=n;
			while(m!=0){
				sum16=sum16+m%16;
				m=m/16;
			}
			if(sum16==sum10){
				printf("%d\n",n);
			}
		}

	}	
}
