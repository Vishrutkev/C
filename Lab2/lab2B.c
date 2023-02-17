/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/



#include <stdio.h>



int main(){
	
	char str[100];
	//scanf("%[^\n]%*c", ch);	
	char c;
	int i;
	/*
	while((c = getchar()) != '\n'){
		ch[i++] = c;
	}
	ch[i] = '\0';

	char result[100];
	*/
	c = getchar();
	while(c != '\n'){
		if(c >= 97 && c <= 122)
			c = c - ('a' - 'A');	
		else if(c >= 48 && c < 53)
			c = '-';  
		else if(c >= 54 && c <= 57)
			c = '+';
		else
			c = c;

		str[i++] = c;
		c = getchar();
	}
		str[i] = '\0';

	printf("%s\n", str);	
}


