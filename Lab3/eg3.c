#include <stdio.h>




int main(){
char v[100];
int b;
char c[100];
sprintf(c, "This is a test %d", 5);
printf("%s", c);
sscanf(c, "%s %d", v, &b);
printf("s: %s", v);
printf("d: %d", b);
}
