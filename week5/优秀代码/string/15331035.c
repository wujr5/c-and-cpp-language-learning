#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
int main()
{
	clock_t a,b;
	a=clock();
	
	printf("字符串的复制，输入字符串：\n");
	char x1[30],y1[30];
	scanf("%s",x1);
	strcpy(y1,x1);
	printf("%s\n", y1);
	
	printf("字符串的拼接，输入三个字符串：\n");
	char x2[30];
	char y2[30];
	char z2[30];
	scanf("%s",x2);
	scanf("%s",y2);
	scanf("%s",z2);
	strcat(x2, y2);
	strcat(x2, z2);
	printf("%s\n", x2);
	
	printf("求字符在字符串的第一个出现位置,输入字符串，输入完之后打回车：\n");
	char x3[30],y3,y32;
	scanf("%s",x3);
	printf("输入字符：\n");
	y32=getchar();
	scanf("%c",&y3);
	char *z3;
	z3=strchr(x3,y3);
	printf("position:%d\n",z3-x3+1);
	
	printf("字符串的比较，输入两个字符串：\n");
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
	
	printf("求字符串的长度，输入字符串：\n");
	char x5[30];
	scanf("%s",x5);
	int a5=strlen(x5);
	printf("The length is %d\n",a5);
	
	printf("求两个字符串的共有字符在第一个字符串中第一次出现位置，输入字符串：\n");
	char x6[30],y6[30];
	scanf("%s",x6);
	scanf("%s",y6);
	int a6=strcspn(x6,y6);
	printf("Character where strings intersect is at position %d\n",a6+1);
	
	printf("求字符在字符串中是否存在及最后一次出现的位置，输入字符串，输入完打回车：\n");
	char x7[30],y7,y72;
	scanf("%s",x7);
	printf("输入字符：\n");
	y72=getchar();
	scanf("%c",&y7);
	char *z7;
	z7=strrchr(x7, y7);
	if (z7)
	printf("The character %c is at position: %d\n",x7, z7-x7+1);
	else
	printf("The character was not found\n");
	
	printf("字符串倒位，输入字符串：\n");
	char x8[30];
	scanf("%s",x8);
	char *y8;
	y8=strrev(x8);
	printf("%s\n",y8);
	
	b=clock();
	double c;
	c=(double)(b-a)/ CLOCKS_PER_SEC;
	printf("运行时间%.2f",c);
	
	return 0;
}
