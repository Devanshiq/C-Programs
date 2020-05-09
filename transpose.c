#include<stdio.h>
#include<conio.h>
void main(){
int arr[10][10],tran[10][10],r,c;
int i,j;
printf(" enter rows and columns ");
scanf("%d%d",&r,&c);
printf("Enter the elements of matrix ");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {

        scanf("%d ",&arr[i][j]);
    }
}

printf("the entered matrix is \n");

    for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("\t %d",arr[i][j]);
    }
    printf("\n ");
}



//transpose of matrix
printf("The transpose of matrix is \n");

    for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("\t %d",arr[j][i]);
    }
    printf("\n ");
}
}






