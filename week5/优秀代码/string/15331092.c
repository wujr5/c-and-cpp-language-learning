#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main() {
	clock_t start, finish;
	start = clock();
	char *s1, *s2;
	s1 = (char *)malloc(sizeof(char)*500);
	s2 = (char *)malloc(sizeof(char)*500);
	printf("Please input two strings: ");
	scanf("%s%s", s1, s2);
	printf("1.The length of the string s1 is %d.\n\n", strlen(s1));
	printf("2.Comparing the two string, ");
	if (strcmp(s1,s2) > 0) printf("the bigger one is s1\n\n");
	if (strcmp(s1,s2) < 0) printf("the bigger one is s2\n\n");
	if (strcmp(s1,s2) == 0) printf("the two are equal\n\n");
	printf("3.Now let us reverse the string s1: ");
	printf("%s\n\n", strrev(s1));
	printf("4.And then change the string s2 into uppercase: ");
	printf("%s\n\n", strupr(s2));
	printf("5.next,change it back to lowercase: ");
	printf("%s\n\n", strlwr(s2));
	printf("Get bored?Let's do some funny things! \n\n6.First we search s1 for the letter appeared in s2: ");
	printf("%d\n\n", strcspn(s1,s2));
	printf("7.second,we search s1 for the letter not appeared in s2: ");
	printf("%d\n\n", strspn(s1,s2)+1);
	printf("8.At last ,combine s1 and s2 and create a new string: (I give it name s1+s2)  ");
	printf("%s\n\n", strcat(s1, s2));
	printf("Do you feel really boring?\n Then I want to ask: \n\n why you want so many funtions in the program?!");
	free(s1); free(s2);
	finish = clock();
	printf("\n\n\nThe runtime is: %.3lf seconds", (double)(finish-start)/CLOCKS_PER_SEC);
return 0;	
}
