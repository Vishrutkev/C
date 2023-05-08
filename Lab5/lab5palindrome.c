// your information goes here
/***************************************
* 23W - Lab05 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 46

//... more headers, declarations, as needed

int isPalindrome (char * str);

void printReverse (char *str);

int isPanlidromR(char *str);

int helper(char * str, int * start, int * last, int * idx, int  finishIdx);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") != 0)
   {
        char *cp = arr;
        while(*cp != '\n'){
                cp++;

        }
        *cp = '\0';       

	// remove (replace) the trailing \n in the first place
	
      // print backwards
      printReverse(arr);
   
      if (isPanlidromR (arr)) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


// assume the '\n' has already been removed (replaced) manually
int isPalindrome (char * str)
{
        int res = 1;
        char *cp = str;
        while(*cp != '\0'){
                cp++;

        }
        int len = cp-str;
        int start = 0;
        int last = len-1;

        for(int i = 0; i < len/2; i++){
                if(*(str+start) == *(str+last)){
                        res = 1;
                }else{
                        res = 0;
                        break;
                }
                start++;
                last--;
        }
        return res;
}

// assume the '\n' has already been removed (replaced) manually
void printReverse (char *str){
        char *cp = str;
        while(*cp != '\0'){
                cp++;

        }
        int len = cp-str;
        int start = 0;
        int last = len-1;


        for(int i = 1; i <= len/2; i++){
                char tmp = *(str+start);
                *(str+start) = *(str+last);
                *(str+last) = tmp;

                start++;
                last--;
        }
	printf("%s", str);
}

int isPanlidromR(char *str){
        char *cp = str;
        while(*cp != '\0'){
                cp++;

        }
        int len = cp-str;
        int start = 0;
        int last = len-1;
        int idx = 1;
        int mid = len/2;
        return helper(str, &start, &last, &idx, mid);

}

int helper(char * str, int * start, int * last, int * idx, int  finishIdx){
        if(*idx > finishIdx){
                return 1;
        }else{
                if(*(str+*start) == *(str+*last)){
                        return 1 * helper(str, start++, last--, idx+1, finishIdx);
                }else{
                        return 0 * helper(str, start++, last--, idx+1, finishIdx);
                }
        }
}
