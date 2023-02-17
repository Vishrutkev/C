//program for lab4table1.c
//your info here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/



#include <stdio.h>
//.... more headers as needed
#include <string.h>
#include<stdlib.h>
#define numROWS 22
#define numCOLUMNS 32
int idx = 1;
int main(int argc, char *argv[])
{
    char inputs_table [numROWS][numCOLUMNS];
    char nameS[10]; char ageS[10]; char rateS[10];
    int age;
    double rate;
    char name[14];
		
    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
     
	   
    while (strcmp(name, "xxx") != 0)        
    {  
	   
        sprintf(inputs_table[idx++], "%s %s %s", name, ageS, rateS);
	for(int i = 0; i < strlen(name); i++){
		name[i] -= ('a' - 'A');
	} 
	age = atoi(ageS);
	rate = atof(rateS);
	age += 10;
	rate = ((rate * 0.50) + rate);
        sprintf(inputs_table[idx++], "%s %d %.2f", name, age, rate);  

	printf("Enter name, age and rate: ");
        scanf("%s %s  %s", name, ageS, rateS);
    


       /* now read again using I/O function scanf(%s %s %s) */ 
           
    }

    
     printf("\nRecords generated in file %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the table Row-by-Row */      

	for(int i = 0; i < idx; i++){
		printf("%s\n", inputs_table[i]);
	}

     return 0;
}
