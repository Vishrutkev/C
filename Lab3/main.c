#include <stdio.h>


extern void func1(void);
extern int x;
extern int y;


int main(){
	x = 5; y = 10;
	func1();
	printf("%d %d\n", x, y);

}
