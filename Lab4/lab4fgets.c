// program for lab4fgets.c
// your information here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
//more headers and declarations as needed ......
#include <string.h>
#define SIZE 14
#define SIZE2 44

int main(int argc, char *argv[])
{
     char resu[SIZE2];
     char input[SIZE2];    
     char name[SIZE];  
     int age;
     double rate; 
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, SIZE2, stdin);
     sscanf(input, "%s %d %lf", name, &age, &rate);
     while (strcmp(name, "exit") != 0)
     {    
       //output original input, using two different I/O functions
       printf("%s", input);  // no \n is needed 
       fputs(input, stdout); 
       rate*=2;
       //.... may need to tokenize the original input
	sprintf(resu, "%s-%d-%.3f-[%d, %d]", name, age+10, rate, (int)rate, (int)rate+1);
	puts(resu);
      // ....
        printf("\n");
       /* now using fgets() to read again */
         printf("Enter name, age and rate (or \"exit\"): ");
	 fgets(input, SIZE2, stdin);
         sscanf(input, "%s %d %lf", name, &age, &rate);
     } 
      return 0;
}
