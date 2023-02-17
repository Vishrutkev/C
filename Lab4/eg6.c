#include <stdio.h>
//.... more headers as needed
#include <string.h>
#include <stdlib.h>
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
	printf("%s", name);
     sprintf(inputs_table[0], "%s %s %s", name, ageS, rateS);
    printf("input = %s\n", inputs_table[0]);
    age = atoi(ageS);
    printf("age = %d", age);	

    
}
