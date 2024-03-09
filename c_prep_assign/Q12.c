//FOR REVERSING STRING
#include<stdio.h>
#include<string.h>
int main(void)
    {
        char ch[30];
        int s;
        printf("Enter String to be reversed : ");
        gets(ch);
        s=strlen(ch);
        for(int i=s;i>=0;i--)
            {
                printf("%c",ch[i]);
            }
        return 0;
    }