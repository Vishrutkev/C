// your info here
/***************************************
* 23W - Programming Assignment 1 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
//... more header as needed
#include <string.h>
/*********  DO NOT CHANGE THESE CONSTANTS IN YOUR FINAL SUBMISSION *********/

#define MAX_SIZE 20   // must be 20 in your final submission
#define SUCCESS 0

char order[5]; // global variable, asc or desc

/******************  YOUR CODE STARTS HERE ******************/
/************************************************************/
/* 
   Input: array A with "siz" elements in it and an integer d
   Output: d is added to the array.
   Return a non-negative number if the addition is successful.
   Return a negative number if the addition is unsuccessful.
   Unsuccessful/Error condition(s): A reaches the MAX_SIZE already.
 */
 
int myAdd( int A[], int * siz, int d )
{
   int i;
   int idx = 0;
   /* ADD YOUR CODE HERE */
   if(*siz >= MAX_SIZE){
        return -1;
   }
   else if(*siz == 0){
	A[0] = d;
        *siz+=1;
   }
   else if((*siz == 1) && (strcmp(order, "asc\n") == 0)){ 
	    if(A[0] >= d){
                   A[1] = A[0];
		   A[0] = d;
                   *siz+=1;
             }else{  
                   A[1] = d;
                   *siz+=1;
              }
   }
   else if((*siz == 1) && (strcmp(order, "desc\n") == 0)){
             if(A[0] >= d){
                  A[1] = d;
                   *siz+=1;   
             }else{  
                  A[1] = A[0];
                  A[0] = d;
                   *siz+=1;
               }
    }
    else{
    	if(strcmp(order, "asc\n") == 0){
               if(d <= A[0]){
                    idx = 0;
                }else if(d >= A[*siz-1]){
                    idx = *siz;
                }else{		
		    for(i = 0; i < *siz-1; i++){ 
		       	   if((d >= A[i]) && (A[i+1] >= d )){
				idx = i+1;
			   }
		    }
		}
	}
      else if(strcmp(order, "desc\n") == 0){
               if(d >= A[0]){
                    idx = 0;
                }else if(d <= A[*siz-1]){
                    idx = *siz;
                }else{
                    for(i = 0; i < *siz-1; i++){
                           if((d <= A[i]) && (A[i+1] <= d )){
                                idx = i+1;
                           }
                    }
                }
        }
                for(int j = *siz; j >= idx; j--){
                        A[j] = A[j-1];
                }
                A[idx] = d;
		*siz+=1;
	}
	
	return 0;

}


/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: If d is found in the array, return the index of the cell containing d.
   Otherwise return a negative number if d is not found.
   Unsuccessful/Error condition(s): d is not found.

   note: this must be a 'binary search', and can be either iterative or recursive(i.e., no loops)
   for recursive, you may need a recursive helper funciton with heading similar to this
   int myBinarySearch_Recursive_helper( int A[], int d,  int start, int end )
 */
 
int myBinarySearch( int A[], int siz, int d )
{
   int low = 0;
   int mid = 0;
   int hi = siz-1;
   int res = 0;
   if(siz == 0){
	res = -1;
   }else if(siz == 1){
	if(A[0] == d){
	   res = 0;
	}
   }
   else if((strcmp(order, "asc\n") == 0)){
        while(hi-low > 1){
                mid = (hi+low)/2;
                if(A[mid] < d){
                        low = mid+1;
                }else{
                        hi = mid;
                }
        }
        if(A[low] == d){
                res = low;;
        }else if(A[hi] == d){
                res =  hi;
        }else{
                res = -1;
        }

   }
    else if((strcmp(order, "desc\n") == 0)){
        while(hi-low > 1){
                mid = (hi+low)/2;
                if(A[mid] > d){
                        low = mid+1;
                }else{
                        hi = mid;
                }
        }
        if(A[low] == d){
                res =  low;
        }else if(A[hi] == d){
                res =  hi;
        }else{
                res = -1;
        }

   } 
	return res;
   
}

/* 

*/

/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: Return a negative number if d is not found.
   Otherwise d is removed from the array and return 0.
   Error condition(s): d does not exist in A.
 */

int myRemove( int A[], int *siz, int d )
{
   /* ADD YOUR CODE HERE */
   int found = -1;
   int len = *siz;
   if((len == 0) || ((len == 1) && A[0] != d)){
	return -1;
   }else if(len == 1 && A[0] == d){
	*siz-=1;
        return 0;
   }
   for(int i = 0; i < len; i++){
        if(A[i] == d){
                found = i;
                break;
        }
   }

   if(found == -1){
        return -1;
   }else{

        for(int i = found; i < len; i++){
                A[i] = A[i+1];
        }
        *siz-=1;

   }
   return 0;
}


/* 
   Input: array A with "siz" elements
   Output: Display the array on the standard output with one space between every two numbers. 
   Print a new line after the last element.
 */

void printArray( int A[], int siz )
{
  int i; 
  printf("[ ");
  for ( i = 0; i < siz; i++ )
     printf("%d ", A[ i ] );
  printf( "]\n" );
}

/* main() function 
 */
int main()
{
 int myArray[MAX_SIZE] = {0};
 int retCode, data;
 char action;
 char a[20];

 do{
   printf("sort order: ascending (asc) or descending (desc)? ");
   fgets(order, 10, stdin);
 
 } while ((strcmp(order, "asc\n") != 0) && (strcmp(order, "desc\n") != 0));
 
 /*******************  YOUR CODE ENDS HERE *******************/
/************************************************************/

/*********  DO NOT CHANGE ANYTHING BELOW THIS LINE IN YOUR FINAL SUBMISSION ****/
 
 int size = 0; // local varible
 do {
  fgets(a, 20, stdin);
  sscanf(a, "%c %d", &action, &data ); 
 
  switch( action )
  {
    case 'a': /* add */
    case  'A':
      retCode = myAdd( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to add %d.\n", data );  
      break; 
        
    case 'r': /* remove */
    case 'R':
      retCode = myRemove( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to remove %d.\n", data );    
      break;  
                    
    case 's': /* search */
    case 'S':
      retCode = myBinarySearch( myArray, size, data );
      if( retCode >= 0 )
        printf( "Found %d at index %d.\n", data, retCode );
      else 
        printf( "Not found %d.\n", data );        
      break;
      
    case 'q':  /* quit */
    case 'Q':
      /* To quit the input, enter an arbitrary integer and character (action) 'q' or 'Q'.
         This is not elegant but makes the code simpler.  */  
      /* Do nothing but exit the switch statement */
      break; 
    
    default:
      printf( "Invalid operation %c\n", action );  
  }
 } while ( action != 'q' && action != 'Q' );

 return 0; 
} // end main
