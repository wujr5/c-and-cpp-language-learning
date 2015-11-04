#include<stdio.h>
int isleapyear(int t) {
	if (t%400 == 0) return 1;
	else if ((t%4 == 0)&&(t%100 != 0)) return 1;
	     else return 0;
}
int main() {
	int n, year, i;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)  {
		scanf("%d", &year);
		printf("%d ", year);
	    if (isleapyear(year) == 1) printf("leap year\n");
	    else printf("common year\n");
	}
	return 0;
}
