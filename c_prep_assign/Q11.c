//EMPLOYEE STRUCTURE
#include<stdio.h>
#include<String.h>

typedef struct employe
{
    char fName[20];
    char lName[20];
    double monthlySal;

}emp;

void emp_init(emp* e);
void set_salary(emp*e11, double sal);
void emp_display(emp*e22);

int main()
{
    emp e1,e2;
    printf("intialize for employe 1\n");
    emp_init(&e1);
    printf("intialize for employe 2\n");
    emp_init(&e2);
    printf("Emp 1 yearly salary : %.2lf\n",e1.monthlySal*(double)12);
    printf("Emp 2 yearly salary : %.2lf\n",e2.monthlySal*(double)12);
    printf("\nGiving both employe a raise of 10 %%");
    set_salary(&e1,((e1.monthlySal*(double)12)*(double)1.1));
    set_salary(&e2,((e2.monthlySal*(double)12)*(double)1.1));
    printf("Emp 1 updated details : \n");
    emp_display(&e1);
    printf("Emp 2 updated details : \n");
    emp_display(&e2);

    return 0;
}
void emp_init(emp* e)
{
        printf("Enter employe first name :\n");
        scanf("%s",&e->fName);
        printf("Enter employe last name :\n");
        scanf("%s",&e->lName);
        printf("Enter employe monthly sal :\n");
        scanf("%lf",&e->monthlySal);

}
void set_salary(emp*e11, double sal)
{
    e11->monthlySal=sal;
}
void emp_display(emp*e22)
{
        printf("Employe first name : %s\n", e22->fName);
        
        printf("Employe last name : %s \n",e22->lName);
        
        printf("Employe monthly sal : %.2lf\n", e22->monthlySal);
        
}