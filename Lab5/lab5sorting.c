// your information goes here
/***************************************
* 23W - Lab05 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 56 
// more headers, declarations, as needed

void swap(char *a, char *b);

void sortArr (char * arr);

void sortArr2 (char * arr);

int main()
{
   char arr[SIZE]; char arrB[SIZE];
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") != 0) 
   {
        char *cp = arr;
        while(*cp != '\n'){
                cp++;

        }
        *cp = '\0';
       // manually remove (replace) the trailing \n in the first place
       
       
       strcpy(arrB, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArr2(arrB);
       printf("%s\n\n", arrB);

       fgets(arr,SIZE,stdin);

    }
   return 0;
}


// two sorting function definitions
void sortArr (char * arr){
   char *p = arr;
   int len = 0;
   while(*p != '\0'){
        len++;
        p++;
   }
	for(int i = 0; i <= len-2; i++){
		for(int j = 0; j <= len-i-2; j++){
			if(*(arr+j) > *(arr+(j+1))){
				swap(arr+j, arr+(j+1));
			}
		} 
	}
}

void sortArr2 (char * arr){
   char *p = arr;
   int min = 0;
   int len = 0;
   while(*p != '\0'){
        len++;
        p++;
   }   
   for(int i = 0; i <= len-2; i++){
	min = i;
	for(int j = i+1; j <= len-1; j++){
		if(*(arr+j) < *(arr+min)){
			min = j;
		}
	}
         swap(arr+i, arr+min);
   }


}



void swap(char *a, char *b){
	char tmp = *a;
        *a = *b;
	*b = tmp;
}
