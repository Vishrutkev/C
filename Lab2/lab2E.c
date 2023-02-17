/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
#define MAX_SIZE 20

int length(char arr[]);
int indexOf(char arr[], char c);
int occurrence(char arr[], char c);
void displayStr(char arr[]);
int isQuit (char arr[]);

int main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code below **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &c);
  
   while (!isQuit(word))   
   { 	 
     // don't change these first two lines
     printf("Input word is \"");
     displayStr(word);
     
     printf("\nContains %d characters\n", length(word));
     printf("'%c' appears %d times in the word\n", c, occurrence(word, c));
     printf("Index of '%c' in the word is %d\n\n", c, indexOf(word, c));	
     printf("Enter a word and a character separated by blank: ");
     scanf("%s %c", word, &c);
   }
}

//functions to implement
int length(char arr[])
{
  int i = 0;
  while(arr[i] != '\0'){
	i++;
  }
  return i;			



}

int indexOf(char arr[], char c)
{
   int i = 0;	
   while(arr[i] != '\0'){
	if(arr[i] == c){
	   return i;	
	}
        i++;
   }
   return -1;	 
}

int occurrence(char arr[], char c)
{
   int count = 0;
   int i = 0;	
   while(arr[i] != '\0'){
        if(arr[i] == c){
           count++;
        }
        i++;
   }
   return count;
}

void displayStr(char arr[])
{  
    int  i = 0;	
    while(arr[i] != '\0'){
       putchar(arr[i]);
       i++;
    }
   
}

int isQuit (char arr[])
{
 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')
    return 1; 
 else 
    return 0;
}
