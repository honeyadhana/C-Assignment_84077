//TO DISPLAY THE THE STRINGS WHICH ARE DUPLICATED IN THE ARRAY
#include<stdio.h>
#include<string.h>
int main()
{
    char *ch[7];
    *(ch)="Honey";
    *(ch+1)="hon";
    *(ch+2)="Honey";
    *(ch+3)="hon";
    *(ch+4)="Honey";

    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(strcmp(*(ch+i),*(ch+j))==0)
                   {
                    puts(*(ch+i));
                    *(ch+i)=" ";
                   }

        }
    }

    return 0;
}