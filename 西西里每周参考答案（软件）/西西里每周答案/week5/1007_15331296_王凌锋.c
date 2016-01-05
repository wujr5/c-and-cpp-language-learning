#include<stdio.h>
int main(){
	int w,xingqiji,c,y,m,d,a,A,B,C;
	c=20;
	m=13;
	d=1;
	scanf("%d",&a);
	y=((a%100)-1);
	A=(int)(y/4);
	B=(int)(c/4);
	C=(int)(2.6*(m+1));
	w=(y+A+B-2*c+C+d-1);
	xingqiji=w%7;
	printf("%d\n",xingqiji);
	return 0;
}
