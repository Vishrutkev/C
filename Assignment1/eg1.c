#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

int myAdd( int A[], int * siz, int d )
{
   int len = *siz;
   int i;
   int idx = 0;
   if(len == 0){
 	A[0] = d;
   }
   /* ADD YOUR CODE HERE */
   else if(len >= MAX_SIZE){
        return -1;
   }else{
        if(strcmp("asrc", "asc") == 0){
                for(i = 0; i < len; i++){
                        if(A[i] >= d){
                                idx = i;
				break;
                        }
                }
        }
        if(strcmp("desc", "desc") == 0){
                for(i = 0; i < len; i++){
                        if(A[i] <= d){
                                idx = i;
				break;
                        }
                }
        }
                *siz = len+=1;
                for(int j = len-1; j >= i+1; j--){
                        A[j] = A[j-1];
                }
                A[i] = d;
   }

	return 0;

}

int myRemove( int A[], int *siz, int d )
{
   /* ADD YOUR CODE HERE */
   int found = -1;
   int len = *siz;
   for(int i = 0; i < len; i++){
	if(A[i] == d){
		found = i;
		break;
   	}
   }

   if(found == -1){
	return -1;
   }else{
        	
 	for(int i = found; i < len; i++){
		A[i] = A[i+1];
	}
	*siz-=1;

   }
   return 0;	

}


void add(int *p){
      int l = *p+=1;
	
	*p = l+=1;
	l = *p;
	for(int i = 0; i < l; i++){
		printf("i  = %d", i);
	}
	printf("*p = %d", l);
	

}

int myBinarySearch( int A[], int siz, int d )
{
   /* ADD YOUR CODE HERE */  
   if((strcmp("assc", "asc") == 0)){
	int low = 0;
	int res;
	int mid;
	int hi = siz-1;
	while(hi-low > 1){
		mid = (hi+low)/2;
		if(A[mid] < d){
			low = mid+1;
		}else{
			hi = mid;
		}
	}
	if(A[low] == d){
		return low;
	}else if(A[hi] == d){
		return hi;
	}else{
		return -1;
	}		



   }  


   if((strcmp("desc", "desc") == 0)){
        int low = 0;
        int res;
        int mid;
        int hi = siz-1;
        while(hi-low > 1){
                mid = (hi+low)/2;
                if(A[mid] > d){
                        low = mid+1;
                }else{
                        hi = mid;
                }
        }
        if(A[low] == d){
                return low;
        }else if(A[hi] == d){
                return hi;
        }else{
                return -1;
        }	



   }


 
}


int main(){

int siz = 4;

int A[] = {10, 9 , 8, 6};
int res = myAdd(A, &siz, 7);
printf("res = %d/n", res);
for(int i = 0; i < 5; i++){
	printf("A[%d] = %d\n",i,  A[i]);
}
printf("siz = %d\n", siz);

int rem = myRemove(A, &siz, 8);
printf("res = %d/n", res);
for(int i = 0; i < siz; i++){
        printf("A[%d] = %d\n",i,  A[i]);
}
printf("siz = %d\n", siz);

printf("\n");

int B[] = {5, 4, 3, 2, 1};
int id = myBinarySearch(B, 5, 9);
printf("idx = %d", id);

}
