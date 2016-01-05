#include<stdio.h> 
int smallestElement(int * array, int size) {
    int i;
    int smallest=100000;
    for(i=0;i<size;i++) {
        if(array[i]<smallest) {
            smallest=array[i];
        }
    }
    return smallest;
}
int main() {
	int a[5]={1,2,3,4,5};
	printf("%d\n",smallestElement(a,5));
}
