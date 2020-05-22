#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//displaying nothing
int count=0;
struct node
{
    int data;
    struct node* next;
}*top,*top1,*temp;
struct node* create()
{
    top=NULL;
}
insert(int val)
{
    if(top==NULL)
    {
    top=(struct node*)malloc(sizeof(struct node ));
    top->data=val;
    top->next=NULL;
    }
//if(top==NULL)
//{
    //insert(val);
//}
else
{
 temp=(struct node *)malloc(sizeof(struct node));
 temp->data=val;
 temp->next=top;
 top=temp;
}
count++;
}

delete()
{
    if(top==NULL)
    { top1=top;
        printf("underflow ");
        return;
    }
    else
    {
      top1=top1->next;
      printf("Popped value is %d",top->data);
      free(top);
      top=top1;
      count--;


    }
}

display(
    struct node* temp)
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        display(temp->next);
    }
}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    delete();
    display(top);
    getch();
}
