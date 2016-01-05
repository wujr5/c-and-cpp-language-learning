#include<stdio.h>
int main() {
    int a[5];
    int qualityPoints(int b);
    int i, b;
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++){
        b = qualityPoints(a[i]);
        printf("%d ", b);
    }

}
int qualityPoints(int b){
    int i;
        if(89 < b && b <= 100){
            return 4;
        }
        if(79 < b && b <= 90){
            return 3;
        }
        if(69 < b && b <= 80){
            return 2;
        }
        if(59 < b && b <= 70){
            return 1;
        }
        if(0 <= b && b <= 59){
            return 0;
        }
    
}                                 
