//perfectly running
//c program to insert element in linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
};
struct node *head;
void create(int n)

{ struct node *ne,*temp;
       int data;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Linked list can not be created ");
    }
    printf("Enter the data of the first node ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    //adding more data

    for(int i=2;i<=n;i++)
    {
         ne = (struct node *)malloc(sizeof(struct node));
         if(ne==NULL)
         {
             printf(" memory can not be allocated as new node is null");
             break;
         }
         printf("Enter the further data of node %d ",i);
    scanf("%d",&data);
    ne->data=data;
    ne->next=head;          //insert at beginning
    head=ne;

    }
    }
    void insertatlast(int n)
    {int data;struct node *temp;
     struct node *na;
        if(head==NULL)
        {
            printf("you can't insert");
        }
        else
            na=(struct node *)malloc(sizeof(struct node));
        for(int i=1;i<=n;i++)
        {
            na=(struct node *)malloc(sizeof(struct node));
            printf("Enter the data for %d last element ",i);
            scanf("%d",&data);
            na->data=data;
            na->next=NULL;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=na;
            temp=temp->next;


        }
    }
    insertatpos()
    {
        int data,beforevalue;struct node *temp;
     struct node *na;
        if(head==NULL)
        {
            printf("you can't insert");
        }
        else
            na=(struct node *)malloc(sizeof(struct node));
            temp=head;
            printf("Enter the data before which you want to insert the value ");
            scanf("%d",&beforevalue);
             printf("Enter the data for inserting at position ");
            scanf("%d",&data);
        while(temp->next->data!=beforevalue)
        {
            temp=temp->next;
        }
        na->data=data;

        na->next=temp->next;
        temp->next=na;
    }

    display()
    {
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }

    void main()
    { int val,value2;
        printf("Enter the no of nodes you want to create ");
        scanf("%d",&val);
        printf("Enter the elements of the list ");
        create(val);
        display();
        printf("Enter the no of nodes you want to add at last ");
        scanf("%d",&value2);
        insertatlast(value2);
        display();
        insertatpos();
        display();
    }

