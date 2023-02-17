//program for lab4table2.c
//your info here
/***************************************
* 23W - Lab04 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
// more headers as needed
#include <string.h>
#include <stdlib.h>

#define numROWS 24
#define numCOLUMNS 34

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0;
     int agei = 0;
     double ratei = 0.0;
     char name[15];
     char age[15];
     char rate[15];
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin); // read into table row directly. add a \n.  Don't change this line
     sscanf(input_table[current_row], "%s %s %s", name, age, rate);
     printf("Name: %s", name);


}
