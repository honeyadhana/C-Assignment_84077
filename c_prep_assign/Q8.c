//To read the name of a student (studentName), roll Number (rollNo) and marks (totalMarks) obtained.
// rollNo may be an alphanumeric string. Display the data as read;
#include<stdio.h>
typedef struct student
{
    char name[12];
    char rollNo[30];
    int totalMarks;

}stud;
int main(void)
{
    stud s1;
    printf("Enter Name of the student :");
    gets(s1.name);
     printf("\nEnter RollNo of the student :");
    gets(s1.rollNo);
     printf("Enter Total Marks of the student :");
    scanf("%d",&s1.totalMarks);

    printf("Student Details :\n Name - %s \t Roll No - %s\t Total marks - %d",s1.name,s1.rollNo,s1.totalMarks);

    return 0;
}