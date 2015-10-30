#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
	double x,a,b,c,d,e,used_time;
	clock_t begin,end;
	scanf("%lf",&x);
	begin=clock();
	a=pow(x,3);
	b=sqrt(x);
	c=log(x);
	d=exp(x);
	e=sinh(x);
	end=clock();
	printf("%lf^3=%lf\n",x,a);
	printf("%lf^(1/2)=%lf\n",x,b);
	printf("ln%lf=%lf\n",x,c);
	printf("e^%lf=%lf\n",x,d);
	printf("sin%lf=%lf\n",x,e);
	used_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("the used time : %lf seconds\n",used_time);
	return 0;
}
