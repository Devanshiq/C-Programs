#include<stdio.h>
#include<conio.h>

/*
     54321
     4321
     321
     21
     1
     1
     12
     123
     1234
     12345
*/

void main()
{ int n;
    printf("Enter the no of rows you want to enter ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}


}





