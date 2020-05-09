#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

struct node *createlist(struct node *last,int value);
void display(struct node *last);
struct node *addtoempty(struct node *last,int value);
struct node *addatbeg(struct node *last,int value);
struct node *addatend(struct node *last,int value);
struct node *addafter(struct node *last,int value,int item);
struct node *del(struct node *last,int value);


   void display(struct node *last)
   { struct node *t;
       if (last==NULL)
        printf("List is empty");
       else
       {   t=last->next;
           do
           {  printf("%d" , t->data);
               t=t->next;
           }while(t!=last->next);
       }
   }
   struct node *addtoempty(struct node *last,int value)
   {
       struct node *n;
       n=(struct node *)malloc(sizeof(struct node));
       n->data=value;
       if (last==NULL)
         {last=n;
       last->next=last;
         }
         return last;
   }
     struct node *addatbeg(struct node *last,int value)
     {
          struct node *n;
       n=(struct node *)malloc(sizeof(struct node));
       n->data=value;
       n->next=last->next;
       last->next=n;
       return last;
     }
     struct node *addatend(struct node *last,int value)
     {

          struct node *n;
       n=(struct node *)malloc(sizeof(struct node));
       n->data=value;
          n->next=last->next;
       last->next=n;
       last=n;
       return last;
     }
    struct node *addafter(struct node *last,int value,int item)
    {
        struct node *n,*t;
       n=(struct node *)malloc(sizeof(struct node));
       n->data=value;
       t=last->next;
       do
       {
           if(t->data==value)
           {
               n->next=t->next;
               t->next=n;

           }
           t=t->next;
       }while(t!=last->next);
       printf("value is not found");
       return last;

    }
      struct node *del(struct node *last,int value)
      { struct node *t,*p;
          if(last==NULL)
            printf ("List is empty");
          return last;
          if(last==last->next&&last->data==value)
            t=last;
          last=NULL;
          free(t);
          return last;
          if (last->next==value)
            t=last->next;
          last->next=t->next;
          free(t);
          return last;
          if(last==value)
            p=last->next;
          while(p->next->data!=value)
          p=p->next;
          p->next=last->next;
          last=NULL;
          last=p;
            return last;

                p=last->next;
                while(p->next!=last)
                {
                    if(p->next->data==value)  // doubt if the second last node contain value then ho to delete it
                    {
                        t=p->next;
                        p->next=t->next;
                        free(t);
                        return last;
                    }
                    p=p->next;
                }

      }
        struct node *createlist(struct node *last )
        {
         int i,n,value;
         printf("How many values do you want to enter");
         scanf("%d" ,&n);
         printf("Enter first data of the list");
         scanf("%d" ,&value);
         last=addtoempty(last,value);
         for(i=1;i<n;i++)
         {
             printf("Enter the data for the list");
             scanf("%d", &value);

         last=addatend(last,value); // why is this inside the loop
         }return last;

        }
        void main()
        {   int choice;
            struct node *last=NULL;
            while(1){

            printf("\n 1.if you want to create a list press 1");
            printf("\n 2.if you want to display the elements  press 2");
            printf("\n 3. if you want to add at empty press 3");
            printf("\n 4. if you want to add at beginning the elements of list press 4");
            printf("\n 5. if you want to add at end the elements of list press 5");
            printf("\n 6. if you want to add after a certain value of the elements of list press 6");
            printf("\n 7. if you want to delete the elements of list press 7");
            printf("\n 8. exit");
            printf("Enter your choice");
            scanf("%d",&choice);


                switch(choice)
                {
                case 1:
                       last=createlist(last,value);break;
                case 2:display(last);break;
                case 3:printf("Enter a number for the list");
                       scanf("%d",&value );
                       last=addtoempty(last,value);break;
                case 4:
                    printf("Enter a number for the list");
                       scanf("%d",&value );
                       last=addatbeg(last,value);break;
                case 5:
                    printf("Enter a number for the list");
                       scanf("%d",&value );
                       last=addatend(last,value);break;
                case 6:
                    printf("Enter a number for the list");
                       scanf("%d",&value );
                       printf("Enter the item after which the new value has to be inserted");
                       scanf("%d",&item);
                       last=addafter(last,value,item); break;
                case 7:
                    printf("Enter a value to be deleted for the list");
                       scanf("%d",&value );
                       last=del(last,value);break;
                case 8:
                    exit(0);
                    default: printf("invalid choice");
                }
                getch();
            }
        }


