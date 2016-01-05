#include<stdio.h>
int main(){
	int i;
	char a[3];
	scanf("%s",&a);
	for (i=0;i<=2;i++){
		a[i]=a[i]-32;
	};
	printf("%s",a);
	printf("\n");
}
