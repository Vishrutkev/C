#include<stdio.h>

int x;
static int y;  //global var won't be accessed outside of the source file (because it's static).

void func1 (void){

	x--;
	y++;


}
