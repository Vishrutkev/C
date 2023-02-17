#include <stdio.h>
#include <string.h>


int isLeap(int year){
        int ans;
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                ans = 1;
        }else {
		ans = 0;
	}
        return ans;
}



int power(int base, int p){
        int result = 1;
        for(int i = 0; i < p; i++){
                result *= base;
        }
        return result;
}

int main(){
	char c[] = "Length";
	printf("Length of a string = %lu", strlen(c));
		
	char x = '4';
	printf("%d", x - '0');

	int d = power(10, 2);

	printf("power: %d", d);

	char t = '2';
	int m = t - '0';
	printf("Letter: %d", m);

	int year = 2020;
	printf("Year 2011 is: %d", isLeap(year));

	char op = '+';
	printf("Char = %c", op);

	//printf("Sum of 5 + 3 = %d", 5 op 3);
}
