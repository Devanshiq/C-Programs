
#include<stdio.h>
#include<conio.h>
/*

             * * * * *
              * * * *
               * * *
                * *
                 *


*/

void main()
{
    int n;
    printf("Enter the no you want to enter ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=i;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");

    }
}
