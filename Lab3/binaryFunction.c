/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/



#include <stdio.h>

#define SIZE 32

void printBinary(int n ){
        printf("binary: ");
        int cou = SIZE-1;
        int k[SIZE]={0};

        while (n && cou >=0) {
             if (n & 1) // != 0
                  k[cou]=1; //printf("1");
             else
                  k[cou]=0; //printf("0");

             n >>= 1; 
             cou--;
        }
        int i=0;
        for(; i< SIZE;i++)
        {
            printf("%d", k[i]);
            if ((i+1)%8==0)
            {
                printf(" ");
            }
        }

}
