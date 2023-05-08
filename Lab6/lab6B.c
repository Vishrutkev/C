// your information goes below
/***************************************
* 22Fa - Lab6 *
* Author: Kevadiya, Vishrut *
* Email: vishrutk@my.yorku.ca *
* EECS username: vishrutk *
* Yorku Student #: 219155290
************************************** **/

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 32
 #define MAX_COLS  52 

 void exchange2D(char p[][MAX_COLS], int n);

 void print2D(char p[][MAX_COLS], int n);

int  main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
     int i = 0;
     /* Read in the lines from the keyboard now, using function fgets() */
     fgets(inputs[i], 52, stdin);
     int idx = 0;
     while(inputs[i][idx] != '\n'){
	idx++;
     } 
     inputs[i][idx] = '\0';
     while (strcmp(inputs[i], "xxx") != 0)
     {
     	i++;
        fgets(inputs[i], 52, stdin);
	idx = 0;
	while(inputs[i][idx] != '\n'){
        	idx++;
     	}
     	inputs[i][idx] = '\0';
     }
     printf("\n");
     
     // displays the array by calling function print2D(...)
	print2D(inputs, i);
     // swaps the first and second row here
	char tmp[MAX_COLS];
	strcpy(tmp, inputs[0]);
	strcpy(inputs[0], inputs[1]);
	strcpy(inputs[1], tmp);
	  
     // calls sub-function exchange2D() to swap some other rows
	
	exchange2D(inputs, i);

     printf("\n== after swapping ==\n");
     
     // displays the (exchanged array) by calling function print2D() 
        print2D(inputs, i);
	 
     
     return 0;
 }


 // do exchange of rows. have to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {
	printf("n = %d", n);	
 	printf("p[2] = %s\n", p[2]);
	for(int i = 2; i < n-1; i+=2){
        	char tmp[MAX_COLS];
		strcpy(tmp, p[i]);
        	strcpy(p[i], p[i+1]);
        	strcpy(p[i+1], tmp);		
		
	}	



 }

 // print the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
 	for(int i = 0; i < n; i++){
		printf("[%d]: %s\n", i, p[i]);
	}

 }

                        


