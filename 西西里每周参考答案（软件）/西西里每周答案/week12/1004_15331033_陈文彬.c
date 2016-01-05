#include <stdio.h>
int indexOf(const char *s1, const char *s2) {
	int i=0,k=0,d=0;
	int j=-1,l,a;
	while(s2[i]!='\0') {
		i++;
	}
	while(s1[k]!='\0') {
		k++;
	}
	if(i>=k) {
		for(l=0;l<i;l++) {
			if(s2[l]==s1[0]) {
				for(a=l;a<l+k;a++) {
					if(s2[a]==s1[a-l]) {
						d++;
					}
				}
				if(d==k) {
					j=l;
					break;
				}
			} else d=0;
		}
	}
	return j;
} 
int main() {
	char a[]="ibc";
	char b[]="abcde";
	printf("%d\n",indexOf(a,b));
}
