/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

#define AlphaV 100

void printBinary(int n);

int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int alpha = AlphaV;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {		
     printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
     printf("R: %d\t", r);  printBinary(r); printf("\n");
     printf("G: %d\t", g);  printBinary(g); printf("\n"); 
     printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    /* now do packing for Alpha,Red,Green,Blue, */

     g <<= 8;	   
     r <<= 16;
     alpha <<= 24;
     rgb_pack = (alpha | r | g | b);


     //printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
     printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);

     printf("\nUnpacking  ......\n");  
     r=g=b=-1;

    /* now do unpacking */
	
      b_unpack = rgb_pack & 0377;
      rgb_pack >>= 8;
      g_unpack = rgb_pack & 0377;
      rgb_pack >>= 8;
      r_unpack = rgb_pack & 0377;
   		

     printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
     printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
     printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
     printf("------------------------------------\n\n"); 
 	 
       printf("enter R value (0~255): ");
       scanf("%d",&r);
       printf("enter G value (0~255): ");
       scanf("%d",&g);
       printf("enter B value (0~255): ");
       scanf("%d",&b);   

  }

}

