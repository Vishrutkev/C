/***************************************
* 23W - Programming Assignment 2 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca *
****************************************/


#include <stdio.h>
#include <ctype.h>  // for tolower()
#include <string.h>
#include <stdlib.h>

#define SIZE 30
#define fieldLength 100

struct db_type
{
   char name[fieldLength];
   int age;
   float fare;
   char embark[fieldLength] ;
   char class[fieldLength] ;
};


char prompt_menu(void);
void enterNew(struct db_type * pArr[]);
void init_list(struct db_type * pArr[]);
void displayDB(struct db_type * pArr[]);
void sortDB(struct db_type * pArr[]);
void updateRecord(struct db_type * pArr[]);
void removeRecord(struct db_type * pArr[]);
void clearDB(struct db_type * pArr[]);


int main(int argc, char *argv[])
{

    struct db_type * db_pArr[SIZE];  // main db storage

    init_list(db_pArr);  // set to NULL

    char choice;
    for(; ;){
      choice = prompt_menu();
      switch (choice)
      {
         case 'n': enterNew(db_pArr); break;

         case 'd': displayDB(db_pArr); break;

         case 's': sortDB(db_pArr); break;

         case 'c': clearDB(db_pArr); break;

         case 'u': updateRecord(db_pArr); break;
         case 'r': removeRecord(db_pArr);break;

         case 'q': exit(1); // terminate the whole program
       }

     }
     return 0;
}

char prompt_menu(void){
  char s[80];
  while(1){
    printf("\n-----------------------------------------------------------------\n");
    printf("|    %-20s","(N)ew record");
    printf("%-20s","(R)emove record");
    printf("(U)pdate record\t|\n");
    printf("|    %-20s","(S)ort database");
    printf("%-20s","(C)lear database");
    printf("(D)isplay database\t|\n");

    printf("|    %-20s","(Q)uit");
    printf("*Case Insensitive*\t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("choose one: ");

    fgets(s,50, stdin); // \n added

    if (strlen(s) == 2 && strchr("edlsuqrcwnvpr", tolower(*s)))
       return tolower(*s); // s[0], return the first character of s  
    //else
    printf("not a valid input!\n");

 }
}


void init_list(struct db_type * pArr[]){
  int t;
  for (t=0; t<SIZE; t++)
  {
     pArr[t]= NULL;
  }
}

/* clear database, deleting all the records in the database */
void clearDB(struct db_type * pArr[]){
   char yn[3];
   printf("are you sure to clear database? (y) or (n)? ");

   fgets(yn,3,stdin);

   // complete the function by calling init_list();
   if(yn[0] == 'y')
        init_list(pArr);
}

/* input a new record into the database */
/* hint: need malloc */
void enterNew(struct db_type * pArr[SIZE])
{
   int i = 0;
   struct db_type *p;
   p = malloc(sizeof(struct db_type));

   char namee[100];
   int agee = 0;
   char portt[100];
   float faree = 0.0;
   char cla[100];

   printf("name: ");
   scanf("%[^\n]", namee);
   getchar();
   printf("age: ");
   scanf("%d", &agee);
   getchar();
   printf("embark port: ");
   scanf("%s", portt);
   getchar();
   printf("fare ($): ");
   scanf("%f", &faree);
   getchar();

   if(strcmp(portt, "Cherbourg") == 0){
        if(faree < 9.0){
                strcpy(cla, "Economic");

        }else if(faree >= 9 && faree < 30){
                strcpy(cla, "LowerMiddle");
        }else if(faree >= 30 && faree < 100){
                strcpy(cla, "Middle");
        }else if(faree >= 100 && faree < 200){
                strcpy(cla, "UpperMiddle");
        }else{
                strcpy(cla, "Wealthy");
        }

   }else if(strcmp(portt, "Queenstown") == 0){
        if(faree < 7){
                strcpy(cla, "Economic");

        }else if(faree >= 7 && faree < 18){
                strcpy(cla, "LowerMiddle");
        }else if(faree >= 18 && faree < 76){
                strcpy(cla, "Middle");
        }else if(faree >= 76 && faree < 150){
                strcpy(cla, "UpperMiddle");
        }else{
                strcpy(cla, "Wealthy");
        }

 }else{

        if(faree < 8){
                strcpy(cla, "Southampton");

        }else if(faree >= 8 && faree < 24){
                strcpy(cla, "LowerMiddle");
        }else if(faree >= 24 && faree < 80){
                strcpy(cla, "Middle");
        }else if(faree >= 80 && faree < 180){
                strcpy(cla, "UpperMiddle");
        }else if(faree >= 180){
                strcpy(cla, "Wealthy");
        }

   }
   p -> age = agee;
   strcpy(p -> class, cla);
   p -> fare = faree;
   strcpy(p -> name, namee);
   strcpy(p -> embark, portt);

    while(pArr[i] != NULL){
         i++;
    }
    pArr[i] = p;

}


/* remove an existing item from the database */

void removeRecord (struct db_type * pArr[])
{
   char name[100];
   printf("enter full name to remove: ");
   scanf("%[^\n]", name);
   getchar();
   int i = 0;

   while(i < SIZE){
         if(pArr[i] == NULL){
                printf("record not found!");
        	break; 
	}


         else if(strcmp(name, pArr[i] -> name) == 0){
         while(pArr[i] != NULL){
                pArr[i] = pArr[i+1];
                i++;
         }
         printf("record [%s] removed successfully", name);
         break;
        }
        i++;
   }



}
/* display all the records in the database. Generate output with the same formaing as the sample output.
 use \t to align well
*/


void displayDB(struct db_type * pArr[]){

  int count = 0;
  int t;
  printf("===============================\n");
  for (t=0; t <SIZE ; t++)
  {
     if( pArr[t] != NULL)
     {
        printf("\nname:\t%s",  (*pArr[t]).name );  // pArr[t] -> name
        printf("\nage:\t%d",  (*pArr[t]).age );
        printf("\nembark:\t%s",  (*pArr[t]).embark );
        printf("\nfare:\t%0.1f",  (*pArr[t]).fare );
        printf("\nclass:\t%s",  (*pArr[t]).class );
        count++;
        printf("\n\n");
     }

  }
  printf("======== %d records =========\n", count);

}


 /* modify an existing record */

void updateRecord (struct db_type * pArr[])     {
  int i = 0;
  char nam[100];
  float newFare = 0.0;
  printf("enter full name to search: ");
  scanf("%[^\n]", nam);
  char prevPort[100];
  char newPort[100];
  while(pArr[i] != NULL){
        if(strcmp(pArr[i] ->name, nam) == 0){
                strcpy(prevPort, pArr[i] -> class);
                printf("record found, enter new fare ($): ");
                scanf("%f", &newFare);
                getchar();
                pArr[i] -> fare = newFare;
   if(strcmp(pArr[i] -> embark, "Cherbourg") == 0){
        if(newFare < 9.0){
                strcpy(newPort, "Economic");

        }else if(newFare >= 9 && newFare < 30){
                strcpy(newPort, "LowerMiddle");
        }else if(newFare >= 30 && newFare < 100){
                strcpy(newPort, "Middle");
        }else if(newFare >= 100 && newFare < 200){
                strcpy(newPort, "UpperMiddle");
        }else{
                strcpy(newPort, "Wealthy");
        }

   }else if(strcmp(pArr[i] -> embark, "Queenstown") == 0){
        if(newFare < 7){
                strcpy(newPort, "Economic");

        }else if(newFare >= 7 && newFare < 18){
                strcpy(newPort, "LowerMiddle");
        }else if(newFare >= 18 && newFare < 76){
                strcpy(newPort, "Middle");
        }else if(newFare >= 76 && newFare < 150){
                strcpy(newPort, "UpperMiddle");
        }else{
                strcpy(newPort, "Wealthy");
        }

   }else{

        if(newFare < 8){
                strcpy(newPort, "Southampton");

        }else if(newFare >= 8 && newFare < 24){
                strcpy(newPort, "LowerMiddle");
        }else if(newFare >= 24 && newFare < 80){
                strcpy(newPort, "Middle");
        }else if(newFare >= 80 && newFare < 180){
                strcpy(newPort, "UpperMiddle");
        }else if(newFare >= 180){
                strcpy(newPort, "Wealthy");
        }

   }
        strcat(pArr[i] -> class, " -> ");
        strcat(pArr[i] -> class, newPort);
        //sprintf(pArr[i] -> class, "%s -> %s", prevPort, newPort);
        printf("record [%s] updated successfully.", nam);
        return;
        }


        i++;
 }
        printf("record not found!");
}


// sort the record, either by name or fare, prompting use for choice

void sortDB(struct db_type * pArr[])
{
  int i = 0;
  int j = 0;
  char c;
  int minI = 0;
  printf("sort by name (n) or fare (f)? ");
  scanf("%c", &c);
  getchar();
  if(c == 'n'){
    while(pArr[i] != NULL){
        minI = i;
        j = i+1;
        while(pArr[j] != NULL){
                if(*(pArr[j] -> name) <= *(pArr[minI] -> name)){
                        minI = j;
                }
        j++;
        }

 struct db_type *tmp = pArr[i];
 pArr[i] = pArr[minI];
 pArr[minI] = tmp;
 i++;
  }
 }

  if(c == 'f'){
    while(pArr[i] != NULL){
        minI = i;
        j = i+1;
        while(pArr[j] != NULL){
                if((pArr[j] -> fare) <= (pArr[minI] -> fare)){
                        minI = j;
                }
        j++;
        }

 struct db_type *tmp = pArr[i];
 pArr[i] = pArr[minI];
 pArr[minI] = tmp;
 i++;
  }
 }else{
      return;
 }


}
                      


