#include <stdio.h>
#include <conio.h>
int main()
{
    struct DOB
    {
        int day,month,year;
    };
    struct student
    {
        int roll_no;
        char name[100];
        float fees;
        struct DOB date;
        } ;

    struct student stud1;
    printf(" Enter the roll no : ");
    scanf("%d",&stud1.roll_no);
     printf(" Enter the name : ");
    scanf("%s",stud1.name);
     printf(" Enter the fees : ");
    scanf("%f",&stud1.fees);
     printf(" Enter the DOB : ");
    scanf("%d%d%d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
  printf("\n*******************STUDENTS DETAIL***************");
  printf("\n Roll no = %d",stud1.roll_no);
   printf("\n Name = %s", stud1.name);
    printf("\n Fees = %f", stud1.fees);
     printf("\n DOB = %d-%d-%d", stud1.date.day,stud1.date.month,stud1.date.year);
     getch();
     return(0);
}
