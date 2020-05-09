#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct student
{

    int roll_no;
    char name[20];
    char course[20];
    int fees;
};
void display (struct student *);
int main()
{
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    printf("\n Enter the data for student :");
    printf("\n Roll no:");
    scanf("%d",&ptr->roll_no);
    printf("\n Name:");
    scanf("%s",&ptr->name);
    printf("\n Course: ");
    scanf("%s",&ptr->course);
    printf("\n Fees:");
    scanf("%d",&ptr->fees);
    display(ptr);
    getch();
    return 0;
}
void display(struct student *ptr)
{
    printf("\n  Details Of student :");
     printf("\n Roll no=%d",ptr->roll_no);
      printf("\n Name=%s",ptr->name);
       printf("\nCourse=%s ",ptr->course);
        printf("\n Fees=%d",ptr->fees);
}




