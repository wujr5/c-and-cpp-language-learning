#include<stdio.h>
	typedef struct {
		char name[20], leader, poor;
		int average_score, class_score, passage, prize, n;
	}student ;//不用全局变量定义 很不方便.
int f(student now) {
	int amount = 0;
	if ((now.average_score > 80) && (now.passage >= 1)) amount+= 8000;
	if ((now.average_score > 85) && (now.class_score > 80))  amount+= 4000;
	if (now.average_score > 90) amount+= 2000;
	if (now.average_score > 85 && now.poor == 'Y') amount+= 1000;
	if ((now.class_score > 80) && now.leader == 'Y') amount+= 850;
	return amount;
} 
int main() {

    student max, now;
	int n, i, sum = 0;
	char t;
	max.prize = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
	  scanf("%s%d%d%c%c%c%c%d", &now.name, &now.average_score, &now.class_score, &t, &now.leader, &t, &now.poor, &now.passage);
	  now.prize = f(now);
	  sum+= now.prize;
	  if (now.prize > max.prize) max = now;
	  }
	printf("%s\n%d\n%d\n", max.name, max.prize, sum);
	return 0;
}
