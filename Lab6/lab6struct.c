/* add your info here */

#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int data1;
   int data2;
};

struct intPtr { 
   int data;
   int * ptr;
};


struct intArr { 
   int data;
   int arr[3];
};


main()
{
  printf("----------- simple structs --------------\n");
  struct ints a = {32,4};
  struct ints b;
  // print the two members of a;
  printf("a: %d %d\n", a.data1, a.data2);
  //print the two members of b;
  b.data2 = 0; 
  printf("b: %d %d\n", b.data1, b.data2);

  a.data1 = 100;
  b = a;
  // print the two members of a; 
  printf("a: %d %d\n",  a.data1, a.data2);
  //print the two members of b; 
  printf("b: %d %d\n", b.data1, b.data2);
  
  b.data1 = 700; // change b.data1
  //use scanf to change b.data2
  printf("Enter value for b.data2: ");
  scanf("%d", &(b.data2));

  // print the two members of a again; 
  printf("a: %d %d\n", a.data1, a.data2);
  // print the two members of b again;
  printf("b: %d %d\n", b.data1, b.data2);

  printf("------- structs with pointer member -----------------\n");
  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.ptr = &c;
  
  struct intPtr yy = xx;
  // print xx's data, pointer value, and pointee value  
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *(xx).ptr );

  //print yy's data, pointer value, and pointee value    
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *(yy).ptr );

  // set the pointee of yy's pointer to be 10000;  
  *yy.ptr = 10000;
  printf("c: %d\n", c);  
  //print xx's data, pointer value, and pointee value   
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *(xx).ptr );
  //print yy's data, pointer value, and pointee value  
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *(yy).ptr );  
  printf("------- structs with array member ------------------\n");

  struct intArr tts = {2, {100,200}};
  
  // set tts's arr member's 2nd element to be 400;  
  tts.arr[1] = 400;
  //print tts's data element, as well as array elements  
  printf("%d [%d %d]\n", tts.data, tts.arr[0], tts.arr[1]);

 
}

