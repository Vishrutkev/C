#include <stdio.h>

int helper(char *str, int* start, int* last, int* idx, int finishIdx);

void printReverse (char *b){
        char *cp = b;
        while(*cp != '\0'){
                cp++;
		
        }
        int len = cp-b;	
	int start = 0;
	int last = len-1;
        

        for(int i = 1; i <= len/2; i++){	
		char tmp = *(b+start);
		*(b+start) = *(b+last);
		*(b+last) = tmp;
			
		start++;
		last--;	
        }
	
}

int isPalindrome (char * str)
{
	int res = 1;
        char *cp = str;
        while(*cp != '\0'){
                cp++;

        }
        int len = cp-str;
        int start = 0;
        int last = len-1;

	for(int i = 0; i < len/2; i++){
		if(*(str+start) == *(str+last)){
			res = 1;
		}else{
			res = 0;
			break;
		}
		start++;
		last--;
	}
	return res;	
}


int isPanlidromR(char *str){
        char *cp = str;
        while(*cp != '\0'){
                cp++;

        }
        int len = cp-str;
        int start = 0;
        int last = len-1;
	int idx = 1;
	int mid = len/2;
	return helper(str, &start, &last, &idx, mid);
	
}

int helper(char * str, int * start, int * last, int * idx, int  finishIdx){
	if(*idx >= finishIdx){
		return 1;
	}else{
		if(*(str+*start) == *(str+*last)){
			return 1 * helper(str, ++start, --last, idx+1, finishIdx);
		}else{
			return 0 * helper(str, ++start, --last, idx+1, finishIdx);
		}
	}
}



int main(){

int a = 2;
int *p = &a;

int siz = sizeof p;
printf("size = %d", siz);
int i = 0;
printf("i = %d", i++);


int s[] = {1, 2, 3, 4};
printf("s = %d", *(s+1));
printf("size of arr = %d", sizeof(s));
printf("size of int: %d", sizeof(s[0]));
char b[15];
//fgets(b, 15, stdin);
char c[] = "ABCDE";
printReverse(c);
printf("str = %s", c);

char q[] = "madamr";
int v = isPalindrome(q);
printf("num = %d", v);

int r = isPanlidromR(q);
printf("numR = %d", r);
}




