#include<stdlib.h>
int * doubleCapacity(int *list, int size){
int i;
int *newlist = (int*)malloc(sizeof(int)*size*2);
for(i = 0; i < size; i++){
	*(newlist + i) = *(list + i);
}
for(i = size; i < 2 * size; i++){
	*(newlist + i) = 0;
}
return newlist;
}
