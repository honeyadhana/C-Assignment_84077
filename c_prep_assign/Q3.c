//To find  FIBONACCI SERIES Upto N NUMBERS
#include<stdio.h>
void fibo(int num);
int main()
{
    int num;
    printf("Enter the Number upto which fibonacci series is required :");
    scanf("%d",&num);
    fibo(num);
    return 0;
}
void fibo(int num)
{
    int a=0,b=1,c=0;
    printf("0\t1\t");
    while(c<=num)
    {
        c=a+b;
            if(c>num)
                 break;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    
}