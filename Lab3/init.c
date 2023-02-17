#include <stdio.h>

int resu;
void decrease(){
	resu -= 30;
	

}

int unique(void){
	static int counter;
	printf("counter = %d", counter);
	counter++;
	return counter;
}



int main(){
resu = 10;
decrease();
printf("resu = %d", resu);

unique();
unique();

unique();
}
