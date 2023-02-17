//program for my_strcat.c
//your information here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include<stdio.h>
//include string library header files
#include<string.h>
//more declarations as needed

void my_strcat(char des[], char src[]);

#define SIZES 35

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while ((strcmp(a, "xxx") || (strcmp(b, "xxx")))){
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);	
   }
}

//your version of strcat implementation here
void my_strcat(char des[], char src[]){
	int d = strlen(des);
        int v = 0;
	for(int i = d; i < SIZES; i++){
		des[i] = src[v];
		v++;
	}


}
