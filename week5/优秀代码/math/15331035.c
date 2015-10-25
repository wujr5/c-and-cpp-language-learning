#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
	int m=clock();
	int a,b,c,d;
	float x,y,z;
	
	
	printf("求正弦,输入角度：\n");
	scanf("%f",&x);
	y=sin(x);
	printf("正弦值为%.2f\n\n",y);
	
	printf("反三角函数之反正弦函数,输入正弦值：\n");
	scanf("%f",&x);
	y=asin(x);
	printf("角度为%.2f\n\n",y);
	
	printf("求e^x,输入x值：\n");
	scanf("%f",&x);
	y=exp(x);
	printf("e^x为%.2f\n\n",y);
	
	printf("求自然对数,输入x值：\n");
	scanf("%f",&x);
	y=log(x);
	printf("该自然对数为%.2f\n\n",y);
	
	printf("勾股定理（求斜边）,输入两直角边长度：\n");
	scanf("%f%f",&x,&y);
	z=hypot(x,y);
	printf("斜边长为%.2f\n",z);
	
	int n=clock();
	float t=(n-m)/1000;
	printf("运行时间为%f秒\n",t);

	return 0;
}
