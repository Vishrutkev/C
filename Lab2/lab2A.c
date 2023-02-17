/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/


#include <stdio.h>



int isDigit(char c);

int isLetter(char c);

int isOperator(char c);



int main(){
	
	int di;
	char ch;

	while(1){

	        printf("Enter an integer and a character separated by blank: ");
	        scanf("%d  %c", &di, &ch);

		if (di == -10000){
			break;
		}
		else if(isLetter(ch)){
			printf("Character '%c' reperesent a letter", ch);
		}else if(isDigit(ch)){
			printf("Character '%c' represents a digit. Sum of %d and %c is %d", ch, di, ch, ch -'0'+ di);
		}else if(isOperator(ch)){
			printf("Character '%c' represents an operator", ch);
		}else{
			printf("Character '%c' represents others", ch);
		}

		printf("\n");

		
	}
}


        int isDigit(char c){
                if(c >= 48 && c <= 57){
                        return 1;
                }
                return 0;
        
        }


        int isLetter(char c){
                if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
                        return 1;
                }       
                return 0;
        }


        int isOperator(char c){
                if(c == 37 || c == 42 || c == 43 || c == 45 || c == 47){
                        return 1;
                }
                return 0;
        }       






