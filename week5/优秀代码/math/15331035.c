#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
	int m=clock();
	int a,b,c,d;
	float x,y,z;
	
	
	printf("������,����Ƕȣ�\n");
	scanf("%f",&x);
	y=sin(x);
	printf("����ֵΪ%.2f\n\n",y);
	
	printf("�����Ǻ���֮�����Һ���,��������ֵ��\n");
	scanf("%f",&x);
	y=asin(x);
	printf("�Ƕ�Ϊ%.2f\n\n",y);
	
	printf("��e^x,����xֵ��\n");
	scanf("%f",&x);
	y=exp(x);
	printf("e^xΪ%.2f\n\n",y);
	
	printf("����Ȼ����,����xֵ��\n");
	scanf("%f",&x);
	y=log(x);
	printf("����Ȼ����Ϊ%.2f\n\n",y);
	
	printf("���ɶ�����б�ߣ�,������ֱ�Ǳ߳��ȣ�\n");
	scanf("%f%f",&x,&y);
	z=hypot(x,y);
	printf("б�߳�Ϊ%.2f\n",z);
	
	int n=clock();
	float t=(n-m)/1000;
	printf("����ʱ��Ϊ%f��\n",t);

	return 0;
}
