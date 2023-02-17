#include <stdio.h>
#include <string.h>


int main(){

	char c[] = "Character";
	printf("Char = %s\n", c);
	printf("len of string = %lu\n", strlen(c));
	printf("sizeof string = %lu\n", sizeof(c));
	for(int i = 0; i < sizeof(c); i++){
		printf("%d : %c\n", i, c[i]);


	}


	printf("\n");
	int s;
	double d;
	char c1;
	printf("size of char: %lu", sizeof(c1));
	 printf("size of int: %lu", sizeof(s));
	 printf("size of double: %lu", sizeof(d));
	
	   char s1[] = "Hello world!";
   char s2[] = "Welcome";
   printf("String s1 before: %s\n", s1);
   strcpy(s1, s2);
   printf("String s1 after: %s\n", s1);
   printf("String s2 : %s", s2);
}
