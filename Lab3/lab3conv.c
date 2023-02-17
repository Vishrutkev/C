/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/

#include <stdio.h>

float funct_IF(int op1, char operator, float op2);

float funct_II(int op1, char operator, int op2);

float funct_FF(float op1, char operator, float op2);

int main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 float a = 9/2;
 float b = 9*1.0/2;  // force 9 to be converted before /
 float c = 9/2*1.0;  // force 2 to be converted before /, but not working
 float c2 = 9/(2*1.0); // force 2 to be converted before /  
 float d = (float)9/2;  // cast 9 before /
 float e =  9/(float)2; // cast 2 before /
 float f = (float) (9/2); // cast after /, nope
 printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
 printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);
  
 // conversions in arithemetic expressions
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversions over assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n", i, j);


 printf("Enter operand_1 operator operand_2 separated by blanks> ");
 scanf("%d %c %f", &op1, &operator, &op2);

 while(op1 >= 0 || op2 >= 0){
   
   printf("Yout input '%d %c %f' result in\n", op1, operator, op2);
   printf("%f (funct_IF)\n", funct_IF(op1, operator, op2));
   printf("%f (funct_II)\n", funct_II(op1, operator, op2));
   printf("%f (funct_FF)\n\n", funct_FF(op1, operator, op2));

   printf("Enter operand_1 operator operand_2 separated by blanks> ");
   scanf("%d %c %f", &op1, &operator, &op2);

 }


}
 
float funct_IF(int op1, char operator, float op2)
{
	float ans;
	if(operator == '+'){
		ans = op1 + op2;
	}else if (operator == '*'){
		ans = op1 * op2;
	}else if (operator == '-'){
		ans = op1 - op2;
	}else if (operator == '/'){
		ans = op1 / op2;
	}

	return ans;

   
}

float funct_II(int op1, char operator, int op2)
{  
    
	float ans;
        if(operator == '+'){
                ans = op1 + op2;
        }else if (operator == '*'){
                ans = op1 * op2;
        }else if (operator == '-'){
                ans = op1 - op2;
        }else if (operator == '/'){
                ans = op1 / op2;
        }

        return ans;



}

float funct_FF(float op1, char operator, float op2)
{
	float ans;
        if(operator == '+'){
                ans = op1 + op2;
        }else if (operator == '*'){
                ans = op1 * op2;
        }else if (operator == '-'){
                ans = op1 - op2;
        }else if (operator == '/'){
                ans = op1 / op2;
        }

        return ans;   




}

 
/*  your explanations 
  because for funct_II both parameter(op1 && op2) are both int and so one of the float operand converted to int when we call the method in main, so now both parameter is int performed the airthmetic operation and then converted again to float and therefore lost the decimals and Hence, got different from funct_IF and funct_FF.

*/
