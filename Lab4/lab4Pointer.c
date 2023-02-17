#include <stdio.h>



int main(){


	int age = 10;
	int age2 = 100;
	int *ptr = &age;
	printf("age = %d\n", age);
	printf("age = %d\n", *ptr);
	*ptr = 14;
	printf("After Value Change\n");
        printf("age = %d\n", age);
        printf("age = %d\n", *ptr);
	
	int *ptr2 = &age2;
	*ptr2 = *ptr * 3;
        printf("age2 = %d\n", age2);
        printf("age2 = %d\n", *ptr2);	
	ptr2 = ptr;
	printf("age2 = %d\n", *ptr2);

	*ptr2 = *ptr2 - 1;;
        printf("age = %d\n", age);
        printf("age = %d\n", *ptr);
	printf("age = %d\n", *ptr2);	
	printf("%p %p %p\n",&age,ptr,ptr2); 
}
