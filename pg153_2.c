#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int fees;
    };
    struct student *ptr_stud[10];
    int main()
    {


        int i,n;
        printf("\n Enter the number of students :");
        scanf( "%d", &n);
        for(i=0;i<n;i++)
        {
            ptr_stud[i]=(struct student *)malloc(sizeof(struct student));
            printf("\n Enter the data for student %d");
            scanf("%d",&i);
            printf("\n Roll no: ");
            scanf("%d",&ptr_stud[i]->roll_no);
            printf("\n Name : ");
            scanf("%s",&ptr_stud[i]->name);
            printf("\n Course :" );
            gets(ptr_stud[i]->course);
            printf("\n Fees :");
            gets(ptr_stud[i]->fees);
            }
            printf("\n ************ Details Of Student****************");
            for(i=0;i<n;i++){
            printf("\n  Roll no =%d", ptr_stud[i]->roll_no);
            printf("\n  Name = %s", ptr_stud[i]->name);
            printf("\n Course= %s",ptr_stud[i]->course);
            printf("\n  Fees=%d", ptr_stud[i]->fees);
            }

return 0;
}
