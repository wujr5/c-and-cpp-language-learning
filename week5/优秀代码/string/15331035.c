#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
int main()
{
	clock_t a,b;
	a=clock();
	
	printf("�ַ����ĸ��ƣ������ַ�����\n");
	char x1[30],y1[30];
	scanf("%s",x1);
	strcpy(y1,x1);
	printf("%s\n", y1);
	
	printf("�ַ�����ƴ�ӣ����������ַ�����\n");
	char x2[30];
	char y2[30];
	char z2[30];
	scanf("%s",x2);
	scanf("%s",y2);
	scanf("%s",z2);
	strcat(x2, y2);
	strcat(x2, z2);
	printf("%s\n", x2);
	
	printf("���ַ����ַ����ĵ�һ������λ��,�����ַ�����������֮���س���\n");
	char x3[30],y3,y32;
	scanf("%s",x3);
	printf("�����ַ���\n");
	y32=getchar();
	scanf("%c",&y3);
	char *z3;
	z3=strchr(x3,y3);
	printf("position:%d\n",z3-x3+1);
	
	printf("�ַ����ıȽϣ����������ַ�����\n");
	char x4[30],y4[30];
	scanf("%s",x4);
	scanf("%s",y4);
	int a4;
	a4=strcmp(x4, y4);
	if(a4>0)
	printf("%s is greater than %s\n",x4,y4);
	else if(a4==0)
	printf("%s is equal to %s\n",x4,y4);
	else
	printf("%s is less than %s\n",x4,y4);
	
	printf("���ַ����ĳ��ȣ������ַ�����\n");
	char x5[30];
	scanf("%s",x5);
	int a5=strlen(x5);
	printf("The length is %d\n",a5);
	
	printf("�������ַ����Ĺ����ַ��ڵ�һ���ַ����е�һ�γ���λ�ã������ַ�����\n");
	char x6[30],y6[30];
	scanf("%s",x6);
	scanf("%s",y6);
	int a6=strcspn(x6,y6);
	printf("Character where strings intersect is at position %d\n",a6+1);
	
	printf("���ַ����ַ������Ƿ���ڼ����һ�γ��ֵ�λ�ã������ַ������������س���\n");
	char x7[30],y7,y72;
	scanf("%s",x7);
	printf("�����ַ���\n");
	y72=getchar();
	scanf("%c",&y7);
	char *z7;
	z7=strrchr(x7, y7);
	if (z7)
	printf("The character %c is at position: %d\n",x7, z7-x7+1);
	else
	printf("The character was not found\n");
	
	printf("�ַ�����λ�������ַ�����\n");
	char x8[30];
	scanf("%s",x8);
	char *y8;
	y8=strrev(x8);
	printf("%s\n",y8);
	
	b=clock();
	double c;
	c=(double)(b-a)/ CLOCKS_PER_SEC;
	printf("����ʱ��%.2f",c);
	
	return 0;
}
