#include <stdio.h>



int i;

int main(){
	
	char c[] = "exit";
	char v[] = "exam";
     
	int res = 0;
	while((c[i] != '\0') && (v[i] != '\0') && ((c[i] <= v[i]) && (v[i] <= c[i]))){
		i++;
	}

        if(c[i] < v[i]){
		res = 1;
	}else if (c[i] > v[i]){
		res = -1;
	}else {
		res = 0;
	}


	printf("result = %d", res);




}
