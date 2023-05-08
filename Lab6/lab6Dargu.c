// your information goes below
/***************************************
* 22Fa - Lab6 *
* Author: Kevadiya, Vishrut *
* Email: vishrutk@my.yorku.ca *
* EECS username: vishrutk *
* Yorku Student #: 219155290
************************************** **/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int getSum(char *[], int n);

int getDiff(char *[], int n);


int main(int argc, char *argv[]){

printf("There are %d arguments (excluding \"a.out\")", argc-1);

if(strcmp(argv[1], "sum") == 0){
	int sum = getSum(argv, argc);
	printf("\n= %d\n", sum);		
}else{

        int sum = getDiff(argv, argc);
        printf("\n= %d\n", sum);


}

}


int getSum(char *arr[], int n){
	printf("\n");
	int sum = 0;
	for(int i = 2; i < n; i++){
		int num = atoi(arr[i]);
		if(i +1 != n){
			printf("%d + ", num);

		}else{
			printf("%d", num);
		}
		sum += num;

	}

	return sum;


}


int getDiff(char *arr[], int n){
        printf("\n");
	int diff = 0;    
        for(int i = 2; i < n; i++){
                int num = atoi(arr[i]);
                if(i + 1 != n){
                        printf("%d - ", num);

                }else{
                        printf("%d", num);
                }
                diff -= num;

        }
	int f = 2*atoi(arr[2]);
        diff = diff + f;
	return diff;


}
