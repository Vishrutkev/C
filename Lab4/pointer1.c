#include <stdio.h>




int main(){
 
  int *p1; int *p2;
  int x = 8;  int y = 9;
  p1 = &x;  p2 = &y;
  *p1 = *p2;

  printf("%d", *p1);
  printf("%d", *p2);




}
