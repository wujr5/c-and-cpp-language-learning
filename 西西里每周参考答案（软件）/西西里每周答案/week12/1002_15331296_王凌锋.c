#include<stdio.h>
#include<stdlib.h>

int * doubleCapacity(int *list, int size) {
    int i;
    int * newlist;
    newlist = (int*) malloc(2*size*sizeof(int));
    for (i = 0; i < size; i++) {
        * (newlist + i) = * (list + i);
    }
    for (i; i < 2 * size; i++) {
        * (newlist + i) = 0;
    }
    return newlist;
}

int main() {
    int list[5]={1,2,3,4,5}, i;
    int *newlist = doubleCapacity(list, 5);
    for(i=0;i<2*5;i++) {
        printf("%d ",*(newlist+i) );
    }
}
//用c++可以过而c语言不能过 
