//BINARY,Octal AND Hexal EQUIVALENT OF Decmal
#include<stdio.h>
void binaryEquivalent(int n,int c);
int main(void)
{
    int num,x,count=0;
    printf("Enter a number of your choice :");
    scanf("%d",&num);
    x=num;
    printf("\n Octal Equivalet = %o",num);
    printf("\n Hexal Equivalet = %x",num);
    while(x!=0)
    {
        x=x/2;
        count++;

    }
    binaryEquivalent(num,(count-1));


    return 0;
}
void binaryEquivalent(int n,int c)
{
    int arr[c],y;
    for(int i=0; i<=c;i++)
    {
            
            y=n%2;
            arr[i]=y;
            n=n/2;
    }
    printf("\n Binary Equivalent = ");
    for(int j=c; j>=0;j--)
    {
            printf("%d",arr[j]);
    }
    

}