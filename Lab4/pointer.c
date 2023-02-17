#include <stdio.h>




int main(){

  int rate = 7;
  int *p = &rate;
  printf("Address of int: %d", *p);

  int i = *p;
  printf("i = %d", i);

  *p = 14;
  printf("%d %d\n", rate, *p);

 printf("%p %p\n", &rate, p);
}
