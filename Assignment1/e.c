#include <stdio.h>
#include<string.h>
#define MAX_SIZE 20
char order[] = "asc";
int myAdd( int A[], int * siz, int d )
{
   int i;
   int idx = 0;
   int len = *siz;
   /* ADD YOUR CODE HERE */
   if(len >= MAX_SIZE){
        return -1;
   }
   else if(len == 0){
        A[0] = d;
        *siz+=1;
   }
   else if((len == 1) && (strcmp(order, "asc") == 0)){
             if(A[0] >= d){
                  A[1] = A[0];
                  A[0] = d;
                   *siz+=1;
             }else{
                   A[1] = d;
                   *siz+=1;
               }
   }
   else if((len == 1) && (strcmp(order, "desc") == 0)){
             if(A[0] >= d){
                  A[1] = d;
                   *siz+=1;
             }else{
                  A[1] = A[0];
                  A[0] = d;
                   *siz+=1;
               }
    }
    else{
        if(strcmp(order, "asc") == 0){
                for(i = 0; i < len; i++){
                        if(A[i] >= d){
                                idx = i;
                                break;
                        }
                }
        }
        if(strcmp(order, "desc") == 0){
                for(i = 0; i < len; i++){
                        if(A[i] <= d){
                                idx = i;
                                break;
                        }
                }
        }

                for(int j = *siz-1; j >= i+1; j--){
                        A[j] = A[j-1];
                }
                A[idx] = d;
                *siz+=1;
   }

        return 0;

}




int main(){
int siz = 1;
int A[MAX_SIZE] = {10};

myAdd(A, &siz, -98);
myAdd(A, &siz, 98);
for(int i = 0; i < siz; i++){
	printf("%d ", A[i]);
}

}
