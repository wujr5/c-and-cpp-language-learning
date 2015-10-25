#include <stdio.h>
#include <string.h>
#include <time.h>
int main(){
	double used_time;
	clock_t begin,end;
	begin=clock();
	
	char string[15];
	char*str1="abc";
	strcpy(string,str1);
	printf("%s\n",string);
	
	strncpy(string,str1,3);
	string[3]='\0';
	printf("%s\n",string);
	
	char buffer[80];
	strcpy(buffer,"hello");
	strcat(buffer,"world");
	printf("%s\n",buffer);
	
	int i;
	i=0;
	char*he="hello world";
	i=strlen(he);
	printf("字符串长度为%d\n",i);
	
	char*string1="123456789";
	char*string2="7J7";
	int length;
	length=strcspn(string1,string2);
	printf("%d\n",length);
	
	end=clock();
	used_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("%.2lf\n",used_time);
	printf("\n");
	printf("我用了5个函数，TA大大乃们看着给分吧\n");
} 
