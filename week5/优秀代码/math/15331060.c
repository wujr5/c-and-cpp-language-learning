#include <stdio.h> 
#include <time.h>
#include <math.h>
#include<stdlib.h>

int main(void)
{
	double duration;
	clock_t start, finish;
	start = clock();
	int rand();
	double div;
	double val,val_;
	int eptr;
	double iptr;
	int *eptr0;
	double  *iptr0;
	int c = rand();
	double a, b, val1, val1_;
	printf("������������������������������������һЩ���㣺");
	scanf("%lf%lf", &val, &div);
	iptr0 = &iptr;
	eptr0 = &eptr;
	val1 = val;
	a = floor(val);
	b = fmod(val, div);
	val_ = frexp(val, eptr0);
	val1_ = modf(val1, iptr0);
	finish = clock();
	duration = (double)(finish - start)/ CLOCKS_PER_SEC;
	printf("%lf�������֣�%lf\n%lf����%lf��������%lf\n%lf��β����%lf\n%lfС�����֣�%lf\n�������һ������%d\n", val, a, val, div, b, val, val_, val1, val1_, c);
	printf("����ʱ�䣺%lfs\n", duration);
	printf("��֪�����ҵ���̫�û�����ô���£�ʱ�����һֱΪ0�������Ҵ�����scanf�ӳ���ʱ�䣬���ԣ���������ʱ��ȡ����ʦ�ֵ����١����ֶ�������\n");
	return 0;
}
