#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node* next;
                                                    // not displaying anything despite running
};
struct queue {
struct node *front;
struct node *rear;

};
struct queue *q;
void createqueue(struct queue *q)
{
    q->rear=NULL;
    q->front=NULL;
}
struct queue *insert(struct queue *q,int val)
{
    struct node *ptr;
    ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=val;
    if(q->front==NULL)
    {
        q->front=ptr;
        q->rear=ptr;
        q->front->next=q->rear->next=NULL;
    }
    else{

        q->rear->next =ptr;
        q->rear =ptr;
        q->rear->next= NULL;
        }
        return q;
}

struct queue *display(struct queue *q)
{
    struct node *ptr;
    ptr=q->front;
    if(ptr==NULL)
        printf("\n Queue is empty");
    else{
        printf("\n");
        while(ptr!=q->rear)
        {
            printf("%d ", ptr->data);
            ptr=ptr->next;

        }
        printf("%d ", ptr->data);
    }
    return q;
}
struct queue* delete(struct queue *q)
{
    struct node *ptr;
    ptr=q->front;
    if(q->front==NULL)
        printf("\n UNDERFLOW");
    else
    {
        q->front=q->front->next;
        printf("\n The value being deleted is %d ", ptr->data);
        free(ptr);
    }
    return q;
}
int peek(struct queue* q)
{
    if(q->front==NULL)
    {
        printf("\n Queue is empty");
        return -1;
    }
    else
        return q->front->data;
}
void main()
{   int val;
    createqueue(q);
    q=insert(q,10);
    q=insert(q,20);
    q=insert(q,30);
    q=insert(q,40);
    val=peek(q);
    q=display(q);
    getch();

}
