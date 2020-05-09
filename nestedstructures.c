#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
      struct student{
      int roll_no;
      char name[80];
      float fees;
      char DOB[100];
      };
      struct student stud[50];
      int n,i,num,new_rollno;
      int new_fees;
      char new_DOB[80],new_name[80];
      printf("\n Enter the number of students:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {   printf("\n Enter teh roll no : ");
      scanf("%d",&stud[i].roll_no);
      printf("\n Enter teh name : ");
      scanf("&s",stud[i].name);
      printf("\n Enter the Fees : ");
      scanf("%f",&stud[i].fees);
      printf("\n Enter the DOB : ");
      scanf("%s",stud[i].DOB);
      }
      for(i=0;i<n;i++){
      printf("\n ********************STUDENTS DETAIL*************");
       printf("\n Roll no: %d",stud[i].roll_no);
        printf("\n Name: %s",stud[i].name);
         printf("\n Fees: %f",stud[i].fees);
          printf("\n DOB: %s",stud[i].DOB);
}
        printf("\n Enter teh student no whose record has to be edited");
        scanf("%d",&num);
         printf("\n Enter teh new Roll no : ");
         scanf("%d",&new_rollno);
          printf("\n Enter the new name : ");
          scanf("%s", &new_name);
           printf("\n Enter the new fees : ");
           scanf("%f",new_fees);
            printf("\n Enter teh new DOB : ");
            scanf("%d",&new_DOB);
            stud[num].roll_no=new_rollno;
            strcpy(stud[num].name,new_name);
            stud[num].fees;
            strcpy(stud[num].DOB,new_DOB);
            for(i=0;i<n;i++){
             printf("\n ********************STUDENTS DETAIL*************");
       printf("\n Roll no: %d",stud[i].roll_no);
        printf("\n Name: %s",stud[i].name);
         printf("\n Fees: %f",stud[i].fees);
          printf("\n DOB: %s",stud[i].DOB);
}
getch();
return(0);
}





