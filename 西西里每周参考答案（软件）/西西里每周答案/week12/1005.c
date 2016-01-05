#include "stdio.h"
#include "string.h"
main() {
	char infix[100], op[100];
	int  num[100];
	while (scanf("%s", &infix) != EOF) {
		int len = strlen(infix);
		int h, i;
		for (i = 0; i < len; i++) {
			if(infix[i] == '-' && infix[i - 1] == '(') {
				for(h = len + 1; h > i; h--) {
					infix[h] = infix[h - 1];
				}
				infix[i] = '0';
				len++;
			}
		}
		int j = 0, k = 0;
		for (i = 0; i < len; i++) {
			if (infix[i] >= 48 && infix[i] <= 57) {
				num[j++] = infix[i] - '0';
			}
			else if (infix[i] != '(' && infix[i] != ')') {
				op[k++] = infix[i];
			}
			else if (infix[i] == ')') {
				char c = op[k - 1];
				switch (c) {
				    case '+':
                        num[j - 2] = num[j - 2] + num[j - 1];
                        break;
                    case '-':
                        num[j - 2] = num[j - 2] - num[j - 1];
                        break;
                    case '*':
                        num[j - 2] = num[j - 2] * num[j - 1];
                        break;
                    case '/':
                        num[j - 2] = num[j - 2] / num[j - 1];
                        break;
			    }
			    j = j - 1;
			    k = k - 1;
			}
		}
		printf("%d\n", num[0]);
	}
}
