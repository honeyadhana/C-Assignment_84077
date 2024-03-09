//To calculate grade of student
#include<stdio.h>
int acceptmarks(int i);
int main()
{
    int m1,m2,m3,m4,m5,total;
    START:
    m1=acceptmarks(1);
    m2=acceptmarks(2);
    m3=acceptmarks(3);
    m4=acceptmarks(4);
    m5=acceptmarks(5);
    if(m1>20||m2>20||m3>20||m4>20||m5>20)
    {
        printf("Marks cannot be greater than 20\n");
        goto START;

    }
    total=m1+m2+m3+m4+m5;
    printf("Total marks = %d \n",total);
    if(total>= 90) 
          printf("Grade: Ex\n ");
    else if(total<90 && total>= 80)
          printf("Grade: A\n");
    else if( total<80 && total>= 70)
          printf("Grade: B\n");
    else if( total<70 && total>= 60)
          printf("Grade: C\n");
    else if( total<60)
          printf("Grade: F\n");
           


    return 0;
}
int acceptmarks(int i)
{
    int marks;
    printf("Enter Marks in Subject %d-",i);
    scanf("%d",&marks);
    return marks;
    
}