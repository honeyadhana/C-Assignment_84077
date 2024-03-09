//TO FIND MAX OF NUMBERS ENTERED in command line argument 
#include<stdio.h>
int main(int arguc, char const*arguv[])
{
    int x;
    
            x=atoi(arguv[1]);// using function atoi to convert from string to number
           
    
    for(int j=1;j<11;j++ )
    {
        printf("%d x %d = %d\n",x,j,x*j);

    }
   


    return 0;
}