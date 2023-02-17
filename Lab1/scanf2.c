/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

int sum (int i, int j)
{
  return i+j;           
}


int main()
{
  int a, b;
  printf("Enter two integers separated by <><><>: " );
 
  scanf( "%d<><><>%d",  &a, &b);     /* assign values to variables a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}
