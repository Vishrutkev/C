//your information here
/***************************************
* 23W - Lab05 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: Vishrutk*
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

void swap(int *, int *);
void swapIncres(int*, int*, int*);

int main( ) {
  int a, b,c; 

  /* Read in three integers */
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncres(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* to read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

//swaps, and also increments variables a,b,c
void swapIncres(int *x, int *y, int *z){
   int temp = *x;
   *x = *z;
   *z = temp;

   *x += 100;
   *y *= 2;
}

