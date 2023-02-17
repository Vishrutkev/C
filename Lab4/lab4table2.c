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
     while(strcmp(name, "xxx") != 0)        
     {   
	current_row++;
	// fgets(input_table[current_row], 30, stdin); // read into table row directly. add a \n.  Don't change this line
        // sscanf(input_table[current_row], "%s %d %f", name, age, rate);
	 for(int i = 0; i < strlen(name); i++){
		if((name[i] >= 65) && (name[i] <= 90)){
			name[i] = name[i];
		}else{
			name[i] -= ('a' - 'A');
		}
         }
	 agei = atoi(age);
	 ratei = atof(rate);
         agei += 10;
         ratei = (ratei * 0.5) + ratei;	 
         sprintf(input_table[current_row++], "%s %d %.2f", name, agei, ratei);
	 /* now, you may want to 'tokenize' the current input line  */	    
	 
	 printf("Enter name, age and rate: ");
	 fgets(input_table[current_row], 30, stdin); // read into table row directly. add a \n.  Don't change this line
         sscanf(input_table[current_row], "%s %s %s", name, age, rate);


     }

     printf("\nRecords generated in file %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the table Row-by-Row */
	  for(int i = 0; i < current_row; i++){
		if(i % 2 == 0){
			printf("\n");
		}
		printf("%s", input_table[i]);	
	  }

     return 0;
}

