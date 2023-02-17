#include <stdio.h>

int function(){
	 int i = 0;
	i++;
	return i;
}

int main(){

	int n = 10;
        int a = 1;
	printf("%d", n & a); // return 0
	int i = 0;
	int o = function();
	printf("i = %d\n", o);

        int c = function();
	printf("c = %d", c);




}
