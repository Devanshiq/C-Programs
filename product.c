#include<stdio.h>
#include<conio.h>
void main()
{                                                          //not executing properly
    int a[100][100],b[100][100],pro[100][100];
    int r1,c1,r2,c2;
    printf("Enter the no of rows and columns ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of the 1st matrix ");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)

    scanf("%d ",&a[i][j]);
}
printf("Enter the no of rows and columns ");
    scanf("%d%d",&r2,&c2);

 printf("Enter the elements of the second matrix ");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)

    scanf("%d ",&b[i][j]);
}
if(c1==r2){
for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
{
    for(int k;k<c2;k++)

    {
        pro[i][j]+=a[i][k]*b[k][j];

    }

          for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("\t %d",pro[i][j]);
    }
    printf("\n ");
}

}
}
}

}

