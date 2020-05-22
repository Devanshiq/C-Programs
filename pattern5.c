#include<stdio.h>
#include<conio.h>

/*
1
12
123
1234
12345
1234
123
12
1


*/

void main()
{
    int n;
    printf("Enter the no of rows you want to print ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
