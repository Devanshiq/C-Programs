//C PROGRAM TO DISPLAY LOWER  TRIANGULAR MATRIX
#include<stdio.h>
#include<conio.h>
void main(){
int arr[10][10],uppertran[10][10],r,c;
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


    for(i=0;i<r;i++)
{
            for(j=0;j<i+1;j++)   //for(j=c;j>0;j--) for(j=0;j<i+1;j++)   //j<c
    {
        //if(i>=j)
        //{
            printf(" \t %d ",arr[i][j]);
        //}
        //else {printf("  ");}

    }}}










