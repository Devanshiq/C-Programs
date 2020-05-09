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
void createqueue(struct queue *);
struct queue *insert(struct queue *,int);
struct queue *delete(struct queue *);
struct queue *display(struct queue *);
int peek(struct queue *);

int main(int argc, char** argv)
{
    int val, option;
    createqueue(q);
    system("cls");
    do
    {
        printf("\n   Main menu");
        printf("\n 1.Insert");
        printf("\n 2.Delete");
        printf("\n 3.Peek");
        printf("\n 4.Display");
        printf("\n 5.Exit");
        printf("\n Enter your option: ");
        scanf("%d ", &option);
        switch(option)
        {
        case 1:
            printf("\n Enter teh no to insert i the queue :");
            scanf("%d ",&val);
            q=insert(q,val);
            break;
        case 2:
            q= delete(q);
            break;
        case 3:
            val=peek(q);
            if(val!=-1)
                printf("\n The value at the front of the queue is : %d",val);
            break;
        case 4:
            q = display(q);
            break;
        }

    }while(option!=5);
    getchar();
    return 0;
}
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
