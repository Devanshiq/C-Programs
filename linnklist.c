#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//LINKED LISTS

/*
struct node{

int data;
struct node *next;
}*start;

struct node* createnode()
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
   return n;
    }

    void insertatlast(int val)
    {struct node *h,*temp;
       h= createnode();
       h->data=val;
       h->next=NULL;
       if(start==NULL)
       {
           start=h;

       }

       else
       {
           temp=start;
           while(temp->next!=NULL)
           {
               temp=temp->next;
        }
        temp->next=h;
        }

        }

    void insertatmiddle(int val,int value)
    {//int value;
      struct node *h,*temp;
       h= createnode();
       h->data=val;
       h->next=NULL;
       if(start==NULL)
       {
           start=h;
    }

       else
       {
          // printf("Enter the node after which you have to insert ");
           //scanf("%d",&value);
           temp=start;
           while(temp->data!=value)
           {
               temp=temp->next;
           }
           h->next=temp->next;
           temp->next=h;
           }
    }

    void insertatbeg(int val)
    {
        struct node *h,*temp;
       h= createnode();
       h->data=val;
       h->next=NULL;
       if(start==NULL)
       {
           start=h;
        }
       else
       {
           h->next=start;
           start=h;
      }

    }

    void display()
    {
        struct node*temp=start;
        while(start!=NULL)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }

          printf("\n");
    }

    void deleteatbeg()
    {struct node *temp;
        if(start==NULL)
            printf("Underflow ");
        else
        temp=start;
        start=start->next;
        printf("\n");
        printf("\nDeleted value is %d",temp->data);
        free(temp);


    }

    void deleteatmiddle(int val)
    {
        struct node *temp;
        if(start==NULL)
            printf("Underflow ");
        else
        temp=start;
        while()
        }
    void main()
{
    insertatbeg(1);
    insertatlast(10);
    insertatlast(20);
    insertatmiddle(30,10);
    insertatbeg(2);
    deleteatbeg();
    insertatbeg(3);

    display();
// AFTER DISPPLAY METHOD IS CALLED NONE OF THE CODE IS RUNNING

   // insertatmiddle(7,3);

    insertatbeg(4);

    display();
    }

  */







































