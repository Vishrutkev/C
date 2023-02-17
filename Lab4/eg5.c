#include <stdio.h>


#define numROWS 22
#define numCOLUMNS 32



int main(){	


    char inputs_table [numROWS][numCOLUMNS];
    char nameS[10]; char ageS[10]; char rateS[10];
    int age;
    double rate;
    char name[14];

    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS);

           

    printf("%s", ageS);
}
