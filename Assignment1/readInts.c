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
  int resu[SIZE];
  int idx = 0;
  int num = 0;
  int result = 0; 			
  int sign = 1;
  while ((chr = getchar()) != EOF){ 
      
    if (chr == 32 || chr == 10)
    {
         // put the current value into arr
         resu[idx++] = sign * result;
	 result = 0;
         num = 0;
         sign = 1;
         chr = getchar();
    }

   
   if(chr == 45){
	sign *= -1;
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
    printf("%d\t%d\n", resu[i],resu[i] *2);
  }
  return 0;
 
}

