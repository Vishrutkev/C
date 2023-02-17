// program for runningAveLocal.c
// your information here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

void run_avg(int, int);

int main(int argc, char *argv[])
{
	
      int input; int count=0; int sum=0;
      

      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
        sum = input; 
	run_avg(sum, count);
 	  	     
        printf("Enter number (-1 to quit):  ");
      	scanf("%d", &input); // reads again
       }  
       return 0;
}

/* complete the function */
void run_avg(int sum, int count)
{  
  static int c;
  static int s;
  c++;
  s += sum;
   double resu = 0.0;
   if(c < 4){	
      resu = s/c;
   } else{
      resu = (1.0 * s)/c;
   }
  
   printf("running average is %d/%d = %.3f\n", s, c, resu);   	
  
}
