#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int fees;
    };
    int main()
    {
        struct student  stud1, *ptr_stud1;
        ptr_stud1=&stud1;
        printf("\n Enter the details of the student : ");
         printf("\n Enter teh roll no : ");
scanf("%d", &ptr_stud1->roll_no);
 printf("\n Enter the name : ");
 scanf("%s",&ptr_stud1->name);
  printf("\n Enter the course : ");
  scanf("%s",&ptr_stud1->course);
   printf("\n Enter the fees : ");
   scanf("%d",&ptr_stud1->fees);
    printf("\n Details Of THe Student ");
     printf("\n roll number=%d ",ptr_stud1->roll_no);
         printf("\n Name=%s ",ptr_stud1->name);
          printf("\n Course= %s ",ptr_stud1->course);
           printf("\n Fees=%d ", ptr_stud1->fees);
           return 0;
        }
