#include<stdio.h>
#include<conio.h>
void main()      //NOT RUNNING PROPERLY
{
    int a[100][100];
    int r,c;
    printf("Enter the no of rows and columns ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the 1st matrix ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)

    scanf("%d ",&a[i][j]);
}


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

if(j>=i)
        printf("%d ",&a[i][j]);
    else {printf("  ");}
}}
}
