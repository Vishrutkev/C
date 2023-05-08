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

 void display(int *arr);

 int largest(int * arr);

int main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count) = i; // store input in array[count] without using []
        count++;
     }
     
	*(array+count) = -1;

      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array);
     
     
      printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* displays the content of the parameter integer array */
 void display(int *arr)
 {
        int i = 0;
        while(*(arr+i) != -1){
 		printf("%d ", *(arr+i));
        	i++;
	}
	
 }


/* this function returns the largest value */
/* in the parameter integer array  */
 int largest(int * arr)
 {
	int i = 0;
	int max = *(arr);
	while(*(arr+i) != -1){
		if(max <= *(arr+i)){
			max = *(arr+i);
		}
		i++;
	}
	return max;
 }

