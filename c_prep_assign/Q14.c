//TO CHECK IF A STRING IS PALINDROME OR NOT
#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[30],ch1[30];
    int a;
    printf("Enter String to be checked for palindrome : ");
    gets(ch);
    strcpy(ch1,ch);
    strrev(ch1);
    a=strcmp(ch,ch1);
    if(a==0)
        printf("\nits a palindrome !");
    else
        printf("\nits not a palindrome !");
    


}