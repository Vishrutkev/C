#include<stdio.h>


void displayStr(char[] arr)
{
    int  i = 0;
    while(arr[i] != '\0'){
       putchar(char[i]);
       i++;
    }

}

void displayS


int length(char arr[])
{
  int i = 0;
  while(arr[i] != '\0'){
        i++;
  }
  return i;



}


int main(){

	char word[] = "HelloWorld!";
        printf("%d\n", length(word));
	displayStr(word);
}
