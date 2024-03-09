//TO FIND MAX OF NUMBERS ENTERED IN COMMAND LINE ARGUMENT


#include<stdio.h>
int main(int arguc, char const*arguv[])
{
    int arr[arguc];
    for(int i=1;i<arguc;i++)
        {
            //printf("%s\n",argv[i]);
            arr[i]=atoi(arguv[i]);// using function atoi to convert from string to number
            //printf("%d\n",arr[i]);
        }
    int max=0;
    for(int j=1;j<arguc;j++ )
    {
        if(max<arr[j])
            max=arr[j];

    }
    printf("max no = %d",max);


    return 0;
}