#include<stdio.h>
#include<string.h>
int main() {
	int n, m;
	int i, j, c;
	char a[200], b[200];
	while(scanf("%d%d", &n, &m) != EOF){
		for(i = 0; i < n; i++){
			scanf("%s", a);
			j = 0;
			for(c = m - 1; c >= 0; c--){
				if(a[c] == 'b'){
					a[c] = 'd';
				}
				b[j] = a[c];
				j++;
			}
				b[j] = '\0';
				printf("%s\n", b);
		}
		printf("\n");
	}
	return 0;
}
