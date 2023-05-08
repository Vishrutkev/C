// your information goes here
/***************************************
* 23W - Lab05 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

/* Passing array to a function. */

#include <stdio.h>

#define MAX_INPUT 32

// more headers, declarations, as needed

 void display(int *arr, int n);

 void largest(int * arr, int n, int* num);

int main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;

     while ( scanf("%d", &i) != EOF){
        *(array+count) = i; // store input in array[count] without using []
        count++;
     }

      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array, count);

      int largeNum = 0;
      largest(array, count, &largeNum);
      printf("\nLargest value: %d\n", largeNum);

     return 0;
 }

 /* displays the content of the parameter integer array */
 void display(int *arr, int n)
 {
        int i = 0;
        while(i != n){
                printf("%d ", *(arr+i));
                i++;
        }

 }


/* this function returns the largest value */
/* in the parameter integer array  */
 void largest(int * arr, int n, int *num)
 {
        int i = 0;
        *num = *(arr);
        while(i != n){
                if(*num <= *(arr+i)){
                        *num = *(arr+i);
                }
                i++;
        }

 }
