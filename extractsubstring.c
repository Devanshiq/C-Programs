#include <stdio.h>
#include <conio.h>
int main()
{
     char str[100],substr[100];
     int i=0,j=0,n,m;
     printf("enter the main string:");
     gets (str);
     printf("enter the position from which to start the substring:");
     scanf("%d",&m);
     printf("enter the length of the substring:");
     scanf("%d",&n);
     i=m;
     while(str[i]!=0&&n>0)
     {
         substr[j]=str[i];
         i++;
         j++;
         n--;




     }
              substr[j]='\0';
              printf("the substring is:");
              puts(substr);
              getch();






}
