#include<stdio.h>
#include<conio.h>

/*
int queue[80],rear=-1,front=-1,max;

 void insert()
{  int val;
if(front==-1)
    front=0;
    printf("Enter the value to insert ");
    scanf("%d",&val);
    if (rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        rear++;
        queue[rear]=val;
    }
}

 void delete()
{int val;
    if (front==-1)
    printf("underflow");
    else
    {   val=queue[front];
   printf(" deleted value is %d", val);
        front++;

    }
}

 void display()
{int i;
if (front=rear==-1)
    printf("There is nothing to print");
else
    for(i=front;i<=rear;i++)
{
    printf("queue is %d",queue[i]);
}
}
void main()
{
    printf("Enter the size of the array ");
   scanf("%d",max);
   printf("the size of the array is %d",max);
    insert();
    insert();
    insert();
    display();

    getch();
}
*/


/*
#define max 6
int queue[max],rear=-1,front=-1;

 void insert()
{  int val;
//if(front==-1)
 //   front=0;
    //printf("\n");
   // printf("Enter the value to insert ");
   // scanf("%d",&val);
    if (rear==max-1)
    {
        printf("overflow");
    }
    else
    {
    if(front==-1)
    front=0;
        printf("\n");
    printf("Enter the value to insert ");
    scanf("%d",&val);
        rear++;
        queue[rear]=val;
    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
} /* End of delete()


 void display()
{int i;
if (front==-1||rear==-1)       //front=rear==-1 is wrong
    printf("There is nothing to print");
else{
    for(i=front;i<=rear;i++)

    printf(" %d",queue[i]);

printf("\n");
}}


/*void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} /* End of display()
void main()
{
    //printf("Enter the size of the array ");
   //scanf("%d",max);
   printf("the size of the array is %d",max);
    insert();
    insert();
    insert();
    display();
    delete();
    printf("\n");
    display();

    getch();
}
*/





//#include <stdio.h>
/*
#define MAX 50

void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }

    }
}

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        //If queue is initially empty
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert()

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of delete()

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */



















/*
#include <stdio.h>

#define MAX 50

void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
   insert();
   insert();
   display();
   delete();
   display();
} /* End of main()

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert()

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of delete()

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */








/*
#define max 6
int rear=-1,front=-1;
 int Queue[max];
void insert(int q[]);
void delete(int q[]);
 void display(int q[]);


void main()
{

    //printf("Enter the size of the array ");
   //scanf("%d",max);
   printf("the size of the array is %d",max);
    insert(Queue);
    //insert(Queue);
    //insert(Queue);
    display(Queue);
    delete(Queue);
    delete(Queue);
    printf("\n");
    display(Queue);

    getch();
}


 void insert(int q[])
{  int val;
//if(front==-1)
 //   front=0;
    //printf("\n");
   // printf("Enter the value to insert ");
   // scanf("%d",&val);
    if (rear==max-1)
    {
        printf("overflow");
    }
    else
    {
    if(front==-1)
    front=0;
        printf("\n");
    printf("Enter the value to insert ");
    scanf("%d",&val);
        rear++;
        Queue[rear]=val;
    }
}

void delete(int q[])
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", Queue[front]);
        front = front + 1;
    }
} /* End of delete()


 void display(int q[])
{int i;
if (front==-1||rear==-1)       //front=rear==-1 is wrong
    printf("There is nothing to print");
else{
    for(i=front;i<=rear;i++)

    printf(" %d",Queue[i]);

printf("\n");
}}


/*void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} /* End of display() */








// QUEUE USING LINKED LISTS
#include<stdlib.h>

/*
struct node {

int data;
struct node *next;


}*head;

 void insert(int val){
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;
 if (head==NULL)
    head=n;
    else
    {
        n->next=head;
        head=n;
    }

 }

 void delete(){
     struct node *r;
     r=head;
 if(head==NULL)
    printf('underflow');
 else{
    printf("Deleted value is %d",r->data);
 head=head->next;
 free(r);
    }}

    void display()
    {
        if (head==NULL)
            printf("Nothing to display");
        else{
            while(head!=NULL)
        // printf("queue is \n");
           {

            printf("  %d",head->data);
            head=head->next;

        }}
    }

 void main()
 {
     insert(5);
     insert(6);
     insert(7);
     display();
     delete();
     display();

     getch();
 }
*/




struct node{
int data;
struct node *next;
}*front=NULL,*rear=NULL;

 void insert(int val)
 {

     struct node *n;
     n= (struct node*)malloc(sizeof(struct node));
     n->data=val;
     n->next=NULL;

     //  if(rear==NULL)
       // rear=n;
       if (front==NULL)
        front=rear=n;
     else
       {

        rear->next=n;
     rear=n;
       }

 }

 void delete()
 {   struct node *r;
     if(front==NULL)
        printf("\nQueue is empty");
     else
     {



     r=front;
     front=front->next;
     printf("\nDeleted element is %d",r->data);
     free(r);


 }}


 display()
 {printf("\n");
      struct node*temp;
     if(front==NULL)
        printf("Nothing to print ");
     else {
        temp=front;
        while(temp!=NULL)  //we can't write front here as it get null
     {
         printf("  %d",temp->data);  //we can't write front here
         temp=temp->next;


     }}

 }

void main()
{
    insert(5);
    insert(7);
    display();
    delete();
    display();
    getch();

}
















/*

#include<stdio.h>
#include<conio.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void delete();
void display();

void main()
{
   int choice, value;

   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nInsertion is Success!!!\n");
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
*/
