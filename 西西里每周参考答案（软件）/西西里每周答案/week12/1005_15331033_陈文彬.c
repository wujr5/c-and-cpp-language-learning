
int a[10];
int * count(const char * const s) {
	int j,k,i;
	int b[10]={0};
	for(i=0;i<10;i++) {
		a[i]=0;
	}
	for(j=0;*(s+j)!='\0';j++) {
		if(*(s+j)-'0'>=0&&*(s+j)-'0'<=9&&b[*(s+j)-'0']==0) {
			b[*(s+j)-'0']=1;
			for(i=0;i<10;i++) {
			}
			for(k=j;*(s+k)!='\0';k++) {
				if(*(s+k)-'0'==*(s+j)-'0') {
					a[*(s+j)-'0']++;
				}
			}
		}
	}
	return a;
}

