/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/

#include <stdio.h>

float sum (float, float);

void greet(int);



int main()
{
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);
   int n;
   printf("Enter the number of interactions: ");
   scanf("%d", &n);
   printf("\n");
   for(int i = 0; i < n; i++){ 	
      float x, y;
      printf("Enter two float numbers separated by ##: ");
      scanf("%f##%f", &x, &y);
      float su = sum(x, y);
      printf( "%.3f + %.3f = %f (%.2f)\n", x,y, su, su);
   }

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;
}

/* need to revise this function */
void greet(int i){
  printf("Hello %d!\n", i);
}

