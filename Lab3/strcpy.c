#include <stdio.h>
#include <string.h>



int main(){

	char message[10];
	strcpy(message, "hello");
	printf("%s\n", message);


	strncpy(message, "OK", 2);
	printf("after: %s\n", message);

	printf("character[4] = %c", message[4]);


	char mes[10] = "OKHiBO";
	strcat(mes, "BYE");
	printf("%s", mes);

	strncat(mes, "V");
	printf("mes = %s", mes);
}
