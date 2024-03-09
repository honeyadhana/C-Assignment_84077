//Write a menu driven program for Date in a C. Declare a sructure Date having data members day, month, year. Implement the following functions.
//void initDate(struct Date *ptrDate):
//void printDateOnConsole(struct Date *pu Date);
//void acceptDateFromConsole(struct Date *ptrDate

 #include<stdio.h>

 struct Date{
  int day;
  int month;
  int year;
  };
void initDate (struct Date *ptrDate){
    ptrDate->day=1;
    ptrDate->day=1;
    ptrDate->day=2020;
 }
void printDateOnConsole(struct Date *puDate){
 printf("Date: %02d/%02d/%d\n",puDate->day,puDate->month,puDate->year);
 }
void acceptDateFromConsole(struct Date *ptrDate){
    printf("Enter day,month and year separated by spaces: ");
    scanf("%d %d %d", &ptrDate->day,&ptrDate->month, &ptrDate->year);
 }
int main(){
    struct Date myDate;
    int choice;

     initDate(&myDate);
     do{
        printf("\n1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
         case 1:
         initDate(&myDate);
         printf("Date intialized.\n");
         break;
         case 2:
         printDateOnConsole(&myDate);
         break;
         case 3:
         acceptDateFromConsole(&myDate);
         break;
         case 4:
         printf("Exiting program.\n");
         break;
         default:
         printf("Invalid choice .Please enter a valid choice.\n");
        }

     }while (choice!=4);
     return 0;
 }


