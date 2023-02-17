/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/
#include <stdio.h>

// here define global variables and a (global) function
int sum;
void run_avg (void);
double resu;

// no parameter, no return
void run_avg (void)
{
    static int s;
    s += sum;
    static int c;
    c++;
   if(c < 4){
      resu = s/c;
   } else{
      resu = (1.0 * s)/c;
   }
    printf("running average is %d / %d = %.3f\n", s, c, resu);
}
