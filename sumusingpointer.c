#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    int *a,n,sum=0,avg;
    printf("Enter the number upto which you want to print");
scanf("%d",&n);
//allocating space to pointer
a=(int*)malloc(n*sizeof(int));

printf("Enter the elements ");
for(int i=0;i<n;i++)
{

    scanf("%d",a+i);
}
printf("The given elements are ");
for(int i=0;i<n;i++)
{

   printf("%d  ",*(a+i));
}
printf("\n");
for(int i=0;i<n;i++)
{
  sum+=*(a+i);

}
printf("The value of the sum is %d\n",sum);
printf("The average of the numbers is \n");
avg=sum/n;
printf("%d",avg);
getch();

}
