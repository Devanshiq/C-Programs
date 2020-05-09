#include<stdio.h>
#include<conio.h>
int main()
{
    char deststr[100],sourcestr[100];
    int i=0,j=0;
    printf("Enter the source string : ");
    gets(sourcestr);
    printf("Enter the destination string :");
    gets(deststr);
    while(deststr[j]!='0')
        j++;
    while(sourcestr!=0)
    {
        deststr[j]=sourcestr[i];
        j++;
        i++;
    }
    deststr[j]='0';
    printf("After appending the destination sting is :%s",deststr);

    getch();
    return 0;
}
