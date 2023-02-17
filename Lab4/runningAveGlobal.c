//program for runningAveGlobal.c
//your infomation here
/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca  *
****************************************/

#include <stdio.h>

extern int sum;
extern void run_avg(void); 


int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      sum = input;
      run_avg();

      printf("Enter number (-1 to quit): ");
      scanf("%d", &input); //reads again
	
     }
	 
     return 0;
}
