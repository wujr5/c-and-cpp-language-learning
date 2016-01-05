#include<stdio.h>
#include<string.h>
int main() {
    int i;
    char x[1000], y[500], z[500];
    while(scanf("%s", &x) != EOF){
        int j = 0, m = 0;
        int l = strlen(x);
        for(i = 0; i < l; i++) {
            if(i % 2 == 0) {
                y[j] = x[i];
                j++;
            }
            else{
                z[m] = x[i];
                m++;
            }
        }
        y[j] = '\0';
        z[m] = '\0';
        printf("%s,%s\n", y, z);
    }
    return 0;
}                                 
