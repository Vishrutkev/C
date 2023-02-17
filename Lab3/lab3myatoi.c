/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/
#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 14

int power(int base, int p);

int my_atoi (char c[], int base);

int strinf(char your[], char my[]);

int length(char c[]);
 
int main(){
  int a,b;
  char arr [SIZE];
  int base;

  printf("Enter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr, &base);
  while(strinf("quit", arr) != 1)
  {
    printf("%s\n", arr);

    //a = atoi(arr);
    //printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr, base);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

  printf("Enter a word of positive number or 'quit': " );
  scanf("%s %d", arr, &base); 
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal value*/

/* Recommended book K&R scans from left to right.
 Here you should scan from RIGHT to LEFT. This is a little more complicated 
 but more straightforward approach (IMHO) */

int my_atoi (char c[], int base)
{
	int d, v;
	int result = 0;
	int idx = 0;
	for(int i = length(c)-1; i >= 0; i--){
		if(base == 10){
			d = power(10, idx++);	
		} else if (base == 9){
			d = power(9, idx++);
		}  else if (base == 8){
                        d = power(8, idx++);
                } else if (base == 7){
                        d = power(7, idx++);
                } else if (base == 6){
                        d = power(6, idx++);
                } else if (base == 5){
                        d = power(5, idx++);
                } else if (base == 4){
                        d = power(4, idx++);
                } else if (base == 3){
                        d = power(3, idx++);
                } else if (base == 2){
                        d = power(2, idx++);
                } else if (base == 1){
                        d = power(1, idx++);
                }
		v = c[i] - '0';
		result += (d * v);
	}
	return result;

}


int length(char c[]){
	int i = 0;
	while(c[i] != '\0'){
		i++;
	}
	return i;
}

int strinf(char your[], char my[]){
	int result = 1;
	int i = 0;
	while(your[i] != '\0'){
                if(your[i] != my[i]){
                        result = 0;
                }
	i++;
	}
	return result;
}

int power(int base, int p){
	int result = 1;
	for(int i = 0; i < p; i++){
		result *= base;
	}
	return result;
}
