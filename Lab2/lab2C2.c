/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int isPrime(int n);

int main ()
{
  int i;
  int arr[SIZE];
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number that's in the range of [0,40] inclusive
    arr[i] = ran;
  }
  printf("array [ ");	
  for(int v = 0; v < SIZE; v++){
	printf("%d ", arr[v]);	
  }
  printf("]\n");		


  int even[SIZE];
  int e = 0;
  int prime[SIZE];
  int p = 0;	
  int m;	

  for(int j = 0; j < SIZE; j++){
	m = arr[j];
	if((m % 2 == 0)){
		even[e] = m;
		e++;
	}
	else if(isPrime(m) == 1){
		prime[p] = m;
		p++;
	}
  }
		

  // display the array
  // create two arrays of the same size of arr, one to hold even numbers and one for prime numbers; 
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // you may add other variables as needed
  // ....  

  
  // output the even numbers
     printf("%d even numbers: ", e);  
      for(int k = 0; k < e; k++){
        printf("%d ", even[k]);
      }
     printf("\n");	



  // output the prime numbers
    printf("%d prime numbers: ", p);
    for(int k = 0; k < p; k++){
        printf("%d ", prime[k]);
    }
    printf("\n");


}


int isPrime(int n){

	if(n <= 1){
		return 0;
	}
	
	for (int i = 2; i < n; i++){
		if(n%i == 0){
			return 0;
		}
	
	}
	return 1;
}



