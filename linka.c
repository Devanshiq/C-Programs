#include<stdio.h>
#include<conio.h>

#include<malloc.h>
struct node
{
   int info;
   struct node *link;
};
struct node *start=NULL;
struct node* createnode()
 {
       struct node *n;
       n=(struct node *)malloc(sizeof(struct node));
       return n;
}
// insertion at end
  void insertnode()
  { struct node *temp,*t;
  temp=createnode();
  printf("enter the value");
  scanf("%d",&temp->info);
  temp->link=NULL;
  if (start==NULL)
   start=temp;
   else
   {    t=start;
        while(t->link!=NULL)
        t=t->link;
        t->link=temp;
        }
  }   // deletion of  first node
        void deletenode()
        { struct node *r;
           if (start==NULL)
           printf("list is empty");
           else{
           r=start;
           start=start->link;
           free(r);
}

        }
           void viewlist()
           {   struct node *t;
               if (start==NULL)
                printf("list is empty");
                else
                {
                    t=start;
               while(t!=NULL)
               {
                   printf("%d",t->info);
                   printf(" ");
                   t=t->link;
               }
               }

           }
             int menu()
             {
                 int value;
                 printf("\n 1. add value to the list");
                 printf("\n 2. Delete first value");
                 printf("\n 3.View list");
                 printf("n 4.Exit");
                 printf("\n Enter your choice");
                 scanf("%d",&value);
                  return value;
             }

             void main()
             {   system("cls");
                 while(1)
                 {
                     switch(menu())
                     {
                     case 1: insertnode();break;
                     case 2: deletenode();break;
                     case 3: viewlist();break;
                     case 4: exit(0);
                     default : printf("invalid choice");

                     }
                 } getch();

             }



