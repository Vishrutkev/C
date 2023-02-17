//program for mystrcmp.c
//your info here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include<stdio.h>
#include <string.h>

// more header file and declarations as needed

#define SIZES 36

int my_strcmp(char x[], char y[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   
   scanf("%s", a); 
   scanf("%s", b);
    
   while ((strcmp(a,  "xxx")) || (strcmp(b, "xxx"))){
      int resu = strcmp(a,b); 
      if (resu < 0) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" have same content\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if (resu2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" have same content\n\n", a,b);

	scanf("%s", a);
        scanf("%s", b);

   }
}

// your version of strcmp implementation here
int my_strcmp(char x[], char y[]){
        static int i = 0;
	        int res = 0;
        while((x[i] != '\0') && (y[i] != '\0') && ((x[i] <= y[i]) && (y[i] <= x[i]))){
                i++;
        }

        if(x[i] < y[i]){
                res = -1;
        }else if (x[i] > y[i]){
                res = 1;
        }else {
                res = 0;
        }

	return res;
}


