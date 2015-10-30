#include <stdio.h>
#include <windows.h>
void color(const unsigned color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
main(){
	color(1);
	printf("hello world!\n");
	color(2);
	printf("hello world!\n");
	color(3);
	printf("hello world!\n");
	color(4);
	printf("hello world!\n");
	color(5);
	printf("hello world!\n");
	color(6);
	printf("hello world!\n");
	return 0;
} 
