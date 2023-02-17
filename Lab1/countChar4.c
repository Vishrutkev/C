/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/

#include <stdio.h> // define EOF

int main(){
  int c;
  int count = 0;
  int line = 0;
  int blanks = 0;

  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  {
    if(c == '\n'){
        line++;
    }else if(c == ' '){
	blanks++;	
    }
    count++;  // spaces and '\n' also counted

    c = getchar(); /* read next */
  }
  printf("# of chars: %d (# of blanks: %d)\n",(count-line), blanks);
  printf("# of lines: %d\n", line);

}
