#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//displaying nothing
struct node
{
    int data;
    struct node* next;
}*top=NULL;
struct node* create()
{
     struct node *n=(struct node*)malloc(sizeof(struct node));
    return n;
}
insert(int val)
{
    struct node * n=create();
    n->data=val;
    n->next=NULL;
if(top==NULL)
{
    top=n;
    //insert(val);                //CAN WE DO RECURSION
}
else
{

    top=top->next;
    top=n;
}
}

delete()
{
    if(top==NULL)
    {
        printf("underflow ");
    }
    else
    {
      top=top->next;


    }
}

display()
{
    struct node* temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    delete();
    display();
    getch();
}
