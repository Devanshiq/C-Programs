#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//NOT RUNNING
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
 struct node* create()
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    return n;

}
insert(int val)
{
    struct node* n= create();
    n->data=val;
    n->next=NULL;


    if(rear==NULL&&front==NULL)
    {
        front=rear=n;
    }
    else
    {
        rear=rear->next;;
        rear=n;

    }



}
delete()
{
    if(rear==NULL&&front==NULL)
    {
        printf("underflow");
    }
    else
    {

        front=front->next;
    }
}
//int peek()
//{

  //  return (rear->data);
//}
display()
{
    struct node *temp=NULL;
    temp=front;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=NULL);

}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    delete();
   // int n=peek();
    //printf("\n peek value is %d",n);
    display();
    getch();
}
