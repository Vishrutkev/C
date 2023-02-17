// program for runningAveLocal2.c
// your information here
/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/
#include <stdio.h>

void run_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        run_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input); // reads again
    }
	
    return 0;
}

/* complete the function */
void run_avg(int input)
{
    static int sum ;
    sum += input;
    static int count;
    count++;
    double resu = 0.0;
    if(count < 4){
      resu = sum/count;
    } else{
      resu = (1.0 * sum)/count;
    }
    printf("running average is %d / %d = %.3f", sum, count, resu);
   
}
