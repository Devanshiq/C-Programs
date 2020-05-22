#include<stdio.h>
#include<conio.h>
/*
                             *
                            * *
                           * * *
                          * * * *



*/

void main()
{int n;
    printf("Enter the no of rows you want to print ");
    scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
      for(int j=i;j<n;j++)
      {
          printf(" ");
      }
      for(int k=1;k<=i;k++)
      {
          printf(" *");
      }
      printf("\n");

  }
  getch();

}


