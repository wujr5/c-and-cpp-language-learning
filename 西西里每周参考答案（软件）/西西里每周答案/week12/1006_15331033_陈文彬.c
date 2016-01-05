
int countLetters(const char * const str) {
	int i=0,j=0;
	while(str[i]!='\0'){
		if(str[i]>64&&str[i]<=122) {
		    j++;
		}
		i++;
	}
	return j;
} 

