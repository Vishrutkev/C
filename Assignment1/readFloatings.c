//add your info below
/***************************************
* 22Fa - Programming Assignment 1 *
* Author: Kevadiya, Vishrut *
* Email: vishrutk@my.yorku.ca *
* EECS username: vishrutk *
* Yorku student #: 219155290 *
****************************************/

#include <stdio.h>
#define SIZE 45    // assume there are no more than 45 literals in the input

int main(){

  int chr;
  double resu[SIZE];
  int idx = 0;
  double num = 0;
  double result = 0;
  int sign = 1;
  double div = 1;
  int d = 0;
  while ((chr = getchar()) != EOF){

    if (chr == 32 || chr == 10)
    {
         // put the current value into arr
         resu[idx++] = sign * result;
         result = 0;
         num = 0;
         sign = 1;
         d = 0;
	 div = 1;
         chr = getchar();
    }


   if(chr == 45){
        sign *= -1;
   }else if((chr == 46) || (d > 0)){
        d++;
	if(chr == 46){
	   result = num/10;
	   chr = getchar();
	}
        num = chr - '0';
	div = div/10;
        result = result + (num*div);
   }else {
        result = num;
        num = chr - '0';
        result += num;
        num = (result * 10);
   }
  }

  printf("--------\n");
  int i;
  for(i=0; i < idx; i++){
    printf("%.4f\t%.4f\n", resu[i],resu[i] *2);
  }
  return 0;

}

