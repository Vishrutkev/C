#include <stdio.h>

#define MAX 150


int main(){

	char str[] = "Hello";
	int n = 10;
	char copy[10];

	sprintf(copy, "%s %d", str, n);
	printf("String: %s", copy);

	char copy1[10];
	int v;
	sscanf(copy, "%s- %d", copy1, &v);
	printf("new String: %s and new int v : %d", copy1, v);
	
	char buf[MAX];
	fgets(buf, MAX, stdin);
	printf("String: %s", buf);


}
