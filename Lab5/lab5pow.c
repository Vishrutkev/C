//your information here
/***************************************
* 23W - Lab04 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/
#include <stdio.h>
#include <math.h>

double my_pow(double base, double exponent);

int main(int argc, char *argv[])
{
	
   double base; 
   int expon;  
   printf("Enter base and power: ");
   scanf("%lf %d", &base, &expon);

   while (base != -1000){
        double res1 = pow(base, expon);
        double res2 = my_pow(base, expon);
        printf("pow:    %.4f\n", res1);
        printf("my_pow: %.4f\n", res2);
        printf("Enter base and power: ");
        scanf("%lf %d", &base, &expon);


    }
	
    return 0;
}

// This function shall be a RECURSIVE function
// i.e., the function should not contain any loop(s) in it
double my_pow(double base, double exponent)
{
	double result = 0.0;
	if(exponent < 0){
		if(exponent == 0){
			return 1;
		}else{
			return (1/base)*my_pow(base, exponent+1);
		}	
	}


        if(exponent >= 0){
                if(exponent == 0){
                        return 1;
                }else{
                        return base*my_pow(base, exponent-1);
                }
        }	

	return result;

}
