#include <stdio.h>

#define SIZE 32

void printBinary(int);

int main() {
  printf("Enter a number (-1000 to quit): ");
  int abc;
  scanf("%d",&abc);

  while(abc != -1000)
  {		
     printBinary(abc); printf("  %d\n", abc);
     printBinary(abc << 3); printf("  %d << 3\n", abc);
     printBinary(abc << 6); printf("  %d << 6\n\n", abc);

     printBinary(abc); printf("  %d\n", abc);
     printBinary(~abc); printf("  ~%d\n\n", abc);


     printBinary(abc); printf("  %d\n", abc);
     printBinary(1<<4);printf("  1<<4\n|\n"); printBinary( abc | (1<<4)); printf("  turn bit-4 on (keep others)\n\n\n");
   
     printBinary(abc); printf("  %d\n", abc);
     printBinary(~(1<<4));printf("  ~(1<<4)\n&\n");printBinary( abc & ~(1<<4)); printf("  turn bit-4 off (keep others)\n\n\n");

     printBinary(abc); printf("  %d\n", abc);
     printBinary(1<<4);printf("  1<<4\n&\n");printBinary( abc & (1<<4)); printf("  keep bit-4, turn off others\n\n\n");


     printBinary(abc); printf("  %d\n", abc);
     printBinary(077);  printf("  077\n&\n");printBinary( abc & 077); printf("  keep lower 6 bits, turn off others\n\n\n");

     printBinary(abc); printf("  %d\n", abc);
     printBinary(~077); printf("  ~077\n&\n");printBinary( abc & ~077); printf("  turn lower 6 bits off, keep others\n\n\n");

     printf("Enter a number (-1000 to quit): ");
     scanf("%d",&abc); // read again
  }

   printf("\n");
   unsigned int x = 0XFFFFFFFF;  // 11 .....1111
   printBinary(x);  printf("  0XFFFFFFFF \n");
   printBinary(x >> 3);  printf("  0XFFFFFFFF  >> 3  unsigned\n");   // add 000
   signed int x2 = 0XFFFFFFFF;   // 11 ......1111
   printBinary(x2 >> 3); printf("  0XFFFFFFFF  >> 3  signed\n");  // add 111 or 000 undefined
   printf("\n");

}



void printBinary(int n ){
   //printf("binary: ");
   int cou = SIZE-1;
   int k[SIZE]={0};

   while (n && cou >=0) { //added cou>=0 after Emily 2031ON o/w crash on ~abc on newer system (e.g.,win WSL or ubuntu 20)
      if (n & 1)
         k[cou]=1; //printf("1");
      else
         k[cou]=0; //printf("0");

      n >>= 1;
      cou--;
   }
   int i=0;
   for(; i< SIZE;i++)
   {
      printf("%d", k[i]);
      if ((i+1)%8==0)
      {
         printf(" ");
      }
   }
}
