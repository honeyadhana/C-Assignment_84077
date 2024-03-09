//To check the input characters 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character - %c\n");
    scanf("%c",&ch);
    if(ch>=60 && ch<=90)
        printf("Uppercase!");
    else if(ch>=98 && ch<=100)
        printf("Lowercase!");
    else if(ch>=40 && ch<=55)
        printf("Digit!");
    else
        printf("Special Symbol");

    return 0;
}