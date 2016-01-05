#include<stdio.h>
int main(){
	int i,j,a,N;
	scanf("%d",&j);
	for(i=0;i<j;i++){
		scanf("%d",&a);
		if(a%100!=0){
		if(a%4==0){
		    printf("%d leap year\n",a); 
	}
	    else {
	    	printf("%d common year\n",a);
		}
}
        else if(a%400==0){
        	printf("%d leap year\n",a);
		}
		else {
			printf("%d common year\n",a);
		}
}
}
