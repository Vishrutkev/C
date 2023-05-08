/***************************************
* 23W - Programming Assignment 1 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>
/*import standard io header files*/

int n; // global variable

int min(int a, int b, int c){
  int res = 0;
  if((a <= b) &&(a <= c)){
        res = a;
  }else if ((b <= a) && (b <= c)){
        res = b;
  }else{
        res = c;
  }


  return res;
}
 
int process( int [][n]);

int main ()
{
  // read input from stdin, and create M, and populate M with trees
  int nOft = 0;
  scanf("%d", &n);
  scanf("%d", &nOft);
  int t=0;
  int tidx = 0;
  int row = 0;
  int col = 0;
  int M[n][n];
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
           M[i][j] = 0;
      }
  }


  while(t != nOft){
        scanf("%d %d", &row, &col);
        M[row][col] = -1;
        t++;
  }
  
  
  printf("............\n");

  // pass M to process(), and get the return value
  int resu = process(M);
  printf("............\n");
  printf("%d\n", resu);

}

int process(int M[][n]){
   int res = 0;
   int num = 0;
   // create another matrix C, and record max count  
    int C[n][n];
    for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		if((i == 0 || j == 0) && (M[i][j] != -1)){
			C[i][j] = 1;
		}else{
			C[i][j] = 0;
		}

		if((i != 0) && (j != 0)){
			if(M[i][j] == -1){
				C[i][j] = 0;
			}else{
				num = min(C[i-1][j-1], C[i][j-1], C[i-1][j]);
				C[i][j] = 1 + num;	
			}
		}
                if(C[i][j] > res){
                     res = C[i][j];
                }
	   }
	}
          
	
   		
        for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                        printf("%d ", C[i][j]);
                        if(j == n-1){
                                printf("\n");
                        }
                }
        }
        
	return res;

    }	
	
   // display C and return the max value











