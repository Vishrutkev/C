#include <stdio.h>




int main(){
	int idx = 0;
	int chr;
	chr = getchar();
	int resu[5];
	for(int i =0; i < 5; i++){
		
		resu[i] = chr;
		chr = getchar();
	}
	for(int i = 0; i < 5; i++){
		printf("resu[%d] = %d\n", i, resu[i]); 
	}



}
