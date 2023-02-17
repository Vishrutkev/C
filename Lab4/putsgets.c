#include <stdio.h>
#include <string.h>



int main(){

        char fromStr[] = "Hello";
        char toStr[20];

        strcpy(toStr, fromStr);
        puts(toStr);
        printf("\n");
        fgets(toStr, 10, stdin);
        puts(toStr);

}
