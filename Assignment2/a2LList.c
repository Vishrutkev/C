// your info here
/***************************************
* 23W - Programming Assignment 2 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERS_SIZE 54
#define MAX_LEN 40

struct twoInts
{
  int intA;
  int intB;
};

struct node {  // list 'node' struct
   char data;
   struct node *next;
};


void init( );
void display();
int len();
char get(int);
// more declarations if needed
int search (char key);
void insert(char c );
void insertAfter(char c, int index);
void delete(char c);
 
struct node * head;   // global variable, the head of the linkedlist

int main()
{
    int i, index; char key;

    struct twoInts * arr[MAX_LEN]; // an array of (unitilized) pionters to structs

    char buffer[BUFFERS_SIZE];
    int value1, value2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFERS_SIZE, file) != NULL)     // or  while (fscanf(file, "%d %d", &value1, &value2) == 2)
    {
       sscanf(buffer, "%d %d", &value1, &value2);   // tokenize buffer and store into value1 and value2

        
      // call function malloc() to allocate memory for arr[count]
      arr[count] = malloc(sizeof (struct twoInts) ); // must!!! in loop
 
      // set the two fields of the structure pointed by arr[count] with value1 and value2
	(arr[count]) -> intA = value1;
        (arr[count]) -> intB = value1;   
       count++;
    }

    fclose(file);

    /* output the two fields of stuctures pointed by the pointer array */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i] -> intA, arr[i] -> intB);
    }

    // now build up the list by reading from the array of structure pointers
    printf("\n");
/*
    init();

    i=0;
    for(; i< count; i++){
        // read two ints from each structure pointed in the array, sum them up and add the sum into the list
        int value = (arr[i] -> intA) + (arr[i] -> intB); 
        insert(value); 
        // no more coding in main below ....................... 

	printf("insert %c: (%d)", value, len());
        display();
    }

    char removeList [] = {'S','A','-','O','R','K','Y','U','L','\0'}; // \0 is the terminator token
    i=0;
    while ( (key=removeList[i]) != '\0'){
        delete(key);
        printf("remove %c: (%d)", key, len()); display();
        i++;
    }

    // insert again
    char addList [] = "YORKU-LAS"; 
    i=0;
    while ( (key=addList[i]) != '\0'){ 
        insert(key);
        printf("insert %c: (%d)", key, len());
        display();
        i++;
    }

    int v = get(0);  printf("\nget(0): %c\n", v);
    v = get(2);  printf("get(2): %c\n", v);
    v = get(3);  printf("get(3): %c\n", v);
    v = get(6);  printf("get(6): %c\n", v);
    v = get(7);  printf("get(7): %c\n", v);
    v = get(8);  printf("get(8): %c\n", v);

    key ='x'; index =2; insertAfter(key,index);
    printf("\ninsert %c after index %d: (%d)", key,index,len()); display();
    key ='y'; index = 0; insertAfter(key,index);
    printf("insert %c after index %d: (%d)", key,index,len()); display();
    key ='z'; index = 6;insertAfter(key,index);
    printf("insert %c after index %d: (%d)", key,index,len()); display();

    v = get(0);  printf("\nget(0): %c\n", v);
    v = get(2);  printf("get(2): %c\n", v);
    v = get(3);  printf("get(3): %c\n", v);
    v = get(6);  printf("get(6): %c\n", v);
    v = get(7);  printf("get(7): %c\n", v);
    v = get(8);  printf("get(8): %c\n", v);
    
    // do search
    printf("\n");
    char searchList [] = "-orkUxyZAy@";
    int len = strlen(searchList);
    i=0;
    while ( i < len ){
	char key = *(searchList + i);
        printf("search %c ....  ", key);
        
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
        i++;
  
    }

*/
}


/* Initialize the list. */
void init( )
{
    head = NULL;
}

/* search the list for the key, returning whether or not it is found */
int search (char key)
{
     
}

/* Insert a new data element with key c into the end of the list. */
/* Hint: You may want to consider the special case that the list is empty,
   and the general case that the list is not empty */

//void insert(char c )  //  at the end
//{
//    /* the special case: the list is empty, need to change head  */
//    if ( ) { 
//       
//    }
//    else{  
//
//    }
// }

/* insert in the middle of the list.
  insert new node with data c, after the node at index 'index'
  assume the list is not empty, and parameter 'index' is in [0, len()-1]
 */
void insertAfter(char c, int index)   
{
    

}

/* the 'lab version' */
/* Remove the node with value c from the list */
/* assume the list is not empty */
/* assume no duplicated keys in the list */
/* assume the node to be deleted is in the list */
/* You do not have to free the space (but welcome to do so though)  */

void delete(char c)
{
   /* the special case: to be removed is the first, need to change head  */
  // if (){
  //      
  //  }

  // else  // the general case, remove from the middle of the list
  // {
          
  // }
}
 



