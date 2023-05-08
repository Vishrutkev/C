// your information goes here
/***************************************
* 23W - Lab06 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers. Global variable

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
	          
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value val */
void setArr (int index, int val){
     int i = val;
     arr[index] = &i;
}

/*

 when function setArr is called inside main function, i is a local variable and its scope is within the setArr function and disappears once the function is done(i is in stack) and inside the setArr function address of arr[index] is storing the address of i and therefore it remembers the very last value of i that is being passed.



*/
