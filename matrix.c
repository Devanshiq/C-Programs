#include<stdio.h>
#include<conio.h>                //Not executing properly
void main()
{
    int a[100][100],b[100][100],d[100][100];
    int r,c;
    printf("Enter the no of rows and columns ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the 1st matrix ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)

    scanf("%d ",&a[i][j]);
}

 printf("Enter the elements of the second matrix ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)

    scanf("%d ",&b[i]);
}
 for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){

d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The addition of two matrix are \n ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t %d",d[i][j]);

        }
        printf("\n ");


}
}
