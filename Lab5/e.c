#include <stdio.h>

int main(){

int a = 0;
int b = 0;

printf("num = %d", a||b);

char messages[4][8] = {"Hello","Hi", "There", "Bye"};
messages[0][0] = 'q';

printf("str = %c", messages[0][0]);

fputs(messages[2], stdout);
printf("str = %s", messages[2]);

int arr[20] = {1, 3, 5, 7};
printf("arr = %p", arr);
int *p = &arr[3];
int *q= arr+9;
printf("arr = %p", arr);
printf("p = %p", p);
printf("q = %p", q);


}
