
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    int rows1,cols1,rows2,cols2,rows_sum,cols_sum;
    int mat1[5][5],mat2[5][5],sum[5][5];
    printf("\n Enter the no of rows in first matrix : ");
    scanf("%d",&rows1);
     printf("\n Enter the no of columns in first matrix : ");
    scanf("%d",&cols1);
     printf("\n Enter the no of rows in second matrix : ");
    scanf("%d",&rows2);
     printf("\n Enter the no of columns in second matrix : ");
    scanf("%d",&cols2);
    if(rows1!=rows2 || cols1!=cols2)
    {
        printf("\n No of rows and columns of both matrices should be equal");
        getch();

    }
     rows_sum=rows1;
     cols_sum=cols1;
     printf("\n Enter the  first elements of the matrix  ");
     for(i=0;i<rows1;i++)
     {
         for(j=0;j<cols1;j++)
         {
             scanf("%d", &mat1[i][j]);

         }
     }
       printf("\n Enter the  second elements of the matrix  ");
        for(i=0;i<rows2;i++)
     {
         for(j=0;j<cols2;j++)
         {
             scanf("%d", &mat2[i][j]);

         }
     }
      for(i=0;i<rows_sum;i++);
      {
              sum[i][j]=0;
          for(j=0;j<cols_sum;j++)
            sum[i][j]+=mat1[i][j]+mat2[i][j];
          }

           printf("\n The elements of the resultant matrix  ");
           for(i=0;i<rows_sum;i++)
           {
               printf("\n ");
               for(j=0;j<cols_sum;j++)
                printf("\t %d ", sum[i][j]);
           }

        return 0;
}

