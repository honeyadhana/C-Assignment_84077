//To perform matrix multiplication
#include<stdio.h>
int main(void)
{
    int row,column,row1,column1;
    START:
    printf("\nEnter rows and colums for first matrix :");
    scanf("%d%d",&row,&column);
    printf("\nEnter rows and colums for second matrix :");
    scanf("%d%d",&row1,&column1);
    if(column!=row1)
        {
            printf("\nCannot perform multiplication on the given matrix size! Coulum of first matrix shoul be same as row of second matrix");
            goto START;        
        }
    int arr[row][column] , arr1[row1][column1], arr2[row][column1];
printf("\nEnter elements of first matrix :\n");
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("arr[%d][%d]-\t",i,j);
            scanf("%d",&arr[i][j]);
        }
    printf("\n");
    }
    printf("\nEnter elements of second matrix :\n");
for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("arr1[%d][%d]-\t",i,j);
            scanf("%d",&arr1[i][j]);
        }
    printf("\n");
    }
printf("Multiplication :\n");
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
           
        }
    printf("\n");
    }
  printf("\n");  
for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("%d\t",arr1[i][j]);
            
        }
    printf("\n");
    }
    printf("\n");
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column1;j++)
        {
            arr2[i][j]=0;
            for(int k=0;k<column;k++)
            {
            arr2[i][j]+= +arr[i][k] * arr1[k][j];
            
            }
        // printf("%d\t", arr2[i][j]);
        }
    
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("%d\t",arr2[i][j]);
            
        }
    printf("\n");
    }
}