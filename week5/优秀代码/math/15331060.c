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
	printf("请输入两个数，接下来会用这两个数进行一些运算：");
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
	printf("%lf整数部分：%lf\n%lf整除%lf的余数：%lf\n%lf的尾数：%lf\n%lf小数部分：%lf\n无聊随机一个数：%d\n", val, a, val, div, b, val, val_, val1, val1_, c);
	printf("运行时间：%lfs\n", duration);
	printf("不知道是我电脑太好还是怎么回事，时间输出一直为0，所以我打算用scanf延长点时间，所以，程序运行时间取决于师兄的手速。（手动滑稽）\n");
	return 0;
}
