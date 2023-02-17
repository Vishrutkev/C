/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/

#include<stdio.h>

int main(){
	int day, month, year;
	printf("Enter month, day and year separated by spaces: ");

	scanf("%d %d %d", &month, &day, &year);

	printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day,  year, month, day);

}
