//To find factorial of a number using recursion 

#include<stdio.h>
int fact(int n);
int main()
{
    int number,result;
    printf("Enter Number to get its factorial :\n");
    scanf("%d",&number);
    result=fact(number);
    printf("\nFactorial of the given number is = %d",result);
    return 0;
    
}
int fact(int n)
{
    
    if(n==0)
        return 1;
    else
        n=n * fact(n-1);

    return n;
}