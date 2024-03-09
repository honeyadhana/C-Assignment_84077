//SORTING STRINGS- Pending
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpstr(const void* a, const void* b)
{
    const char* a1 = *(const char**)a;
    const char* b1 = *(const char**)b;
    return strcmp(a1,b1);
}
int main(void)
{
    int ctr;
    printf("Enter No of strings required less than 10!\n");
    scanf("%d",&ctr);
    char nameOfStudents[10][50];
    printf("Enter %d strings\n",ctr);
    for(int i=0;i<=ctr;i++)
    {
        gets(nameOfStudents[i]);
    }
      int n = sizeof nameOfStudents / sizeof *nameOfStudents;
    for (int i = 0; i <n ; i++)
         qsort (nameOfStudents[i], ctr, sizeof(*nameOfStudents[i]), cmpstr);
    for (int i = 0; i < n; i++) {
        printf ("nameOfStudents[%d] : ", i); 
        for (int j = 0; j < ctr; j++)
            putchar (nameOfStudents[i][j]);
        putchar ('\n');
    }
   


    return 0;
}
