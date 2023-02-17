/***************************************
* 23W - Lab03 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/



#include <stdio.h>


int isLeap(int year);

int countDays(int month, int day, int isLeap);

int main(){

  int month;
  int day;
  int year;
  int days;
  int leap;
  
  printf("Enter date ('YYYY MM DD'): ");
  scanf("%d %d %d", &year, &month, &day);

  while(year >= 0){

  leap = isLeap(year);

  days = countDays(month, day, leap);
  
  if(leap){
     printf("%d days of year %d have elapsed [leap year]\n\n", days, year);
  }else {
     printf("%d days of year %d have elapsed\n\n", days, year);
  }

  printf("Enter date ('YYYY MM DD'): ");
  scanf("%d %d %d", &year, &month, &day); 

  }
}

int isLeap(int year){
        int ans;
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                ans = 1;
        }else {
                ans = 0;
        }
        return ans;
}

int countDays(int month, int day, int isLeap){

	int ans = 0;
		for (int i = 1; i < month; i++){
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
				ans += 31;
			}else if (isLeap && i == 2){
				ans += 29;
			}else if (!isLeap && i == 2){
				ans += 28;
			}
			else {
				ans += 30;
			}
		}
	ans = ans + day;
	return ans;
}
