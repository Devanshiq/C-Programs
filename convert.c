//conversion of lower case to upper case
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100],upperstr[100];
    int i=0;
    printf("Enter the string : ");
    gets(str);
    while(str[i]!='0')
    {
        if(str[i]>='a'&&str[i]<='z')
            upperstr[i]=str[i]-32;
        else
            upperstr[i]=str[i];
        i++;
    }
    upperstr[i]='0';
    printf("The string converted into uppercase is : ");
    puts(upperstr);
    return 0;
}
