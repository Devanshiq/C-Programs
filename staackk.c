#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 /* void push(int value){

 if top=max-1;
 printf("overflow");
 else
    top++;
 stack[top]=value;
 }
 void pop(){
 int value;
 if top=-1;
 printf("underflow");
 else
    value=stack[top];
    printf("poped value is %d", value);
 top--;
 }
  peek(*stack[]){
  if top=-1
    printf("underflow");
    else
 printf("%d",stack[top]);

 }
 void display()
 {
     for(int i=top;i>=0;i--)
     {
         printf("%d",stack[i]);
     }
 }
 void main(){
 int stack[50], top,i;
 printf("Enter the value of the  array ");
 // scanf("%d",&stack[i]);
 push(5);
 push(9);
 push(10);
 push(stack,6);
 display();
 pop();
 display();
 peek(stack);
 }
 */
/*
#define MAX 5
 int stack[MAX],top=-1;
 void push()
 { int value;
     if (top==MAX-1)
        printf("\noverflow");
     else
     {
         printf("enter the no to be pushed");
         scanf("%d",&value);
         top++;
         stack[top]=value;
     }
 }
     void pop(){
         int value;
     if (top==-1)
        printf("empty stack");
     else
     {
         value=stack[top];
         printf("\npopped value is %d ",value);
         top--;


     }
     }

     void display()
     {
         int i;
         if (top==-1)
            printf("nothing to print");
         else
         {  printf("stack is");
             for(i=top;i>=0;i--)
             {
                 printf("\n%d  ",stack[i]);
             }
            // printf("\n");
         }

     }

 void main()
 {
     //printf("Enter the elements you want to push");
     //pop();
     push();
     display();
     push();
     display();
     push();
     display();
     push();
     push();
     push();
     display();
     pop();
     display();
    getch();
 }

*/

/*#define MAX 5	//Maximum number of elements that can be stored

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
	int ch;

	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);

			default: printf("\nWrong Choice!!");
		}
	}
}

void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
*/
/*
#define MAX 5	//Maximum number of elements that can be stored

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
    push();
    display();
    push();
    display();
    push();
    display();
    pop();
    display();


	/*int ch;

	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);

			default: printf("\nWrong Choice!!");
		*/
		//}
	//}
//}
/*
void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}

*/
/*

#define MAX 5
 int stack[MAX],top=-1;
 void push()
 { int value;
     if (top==MAX-1)
        printf("\noverflow");
     else
     {
         printf("enter the no to be pushed");
         scanf("%d",&value);
         top++;
         stack[top]=value;
     }
 }
     void pop(){
         int value;
     if (top==-1)
        printf("empty stack");
     else
     {
         value=stack[top];
         printf("\npopped value is %d ",value);
         top--;


     }
     }

     void display()
     {
         int i;
         if (top==-1)
            printf("nothing to print");
         else
         {  printf("stack is");
             for(i=top;i>=0;i--)
             {
                 printf("\n%d  ",stack[i]);
             }
            // printf("\n");
         }

     }

 void main()
 {
    int ch;
     while(1){
    printf("\n1.PUSH \n2.pop \n3.display \n4.exit");
    printf("Enter your choice");
    scanf("%d",&ch);

    switch(ch)
    {
          case 1:
            push();
            break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }

    }

    getch();
 }
*/
 //STACK USING LINKED LISTS


 /*
 struct node{
     int data;
     struct node *next;


 }*start,*head;
 create_node(**start,int val){

 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;
 }
 push(**start,int val)
 {
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;

     if head==NULL
        head=n;
     else
     {
         n->next=head;
         start=n;
     }
 }
 pop(**start)
 {
     if (head==NULL){
        printf("There is nothing to pop")
     }
     else
        struct node *r;
     r=head;
     head=head->next;
     printf("popped value is %d",r->data);
     free(r);

 }

 display(**start)
 {
     while(head!=NULL)
     {
         printf("\n%d",head->data);
         head=head->next;
     }

 }


  void main ()
  {

      push(start,6);
      push(start,3);
      push(start,4);
      display(start);
      pop(start);
      display(start);
      getch();
  }
*/
/*
 struct node{
     int data;
     struct node *next;


 }*head;
 /*
 create_node(int val){

 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;
 }
 */

 /*push(int val)
 {
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
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
 pop()
 {   struct node *r;
     if (head==NULL){
        printf("There is nothing to pop");
     }
     else{

     r=head;
     head=head->next;
     printf("popped value is %d",r->data);
     free(r);
     }
 }

 display()
 {   struct node *temp;
 temp=head;
     while(temp!=NULL)
     {
         printf("\n%d",temp->data);
         temp=temp->next;
     }
 printf("\n");
 }


  void main ()
  {
    //create_node(7);
      //create_node(8);
      push(6);
      push(3);
      push(5);
      display();
      pop();
      display();
      getch();
  }
  */




  struct node{
     int data;
     struct node *next;


 }*head;
 /*
 create_node(int val){

 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;
 }
 */

 push()
 {int val;
     printf("Enter the value to be pushed");
     scanf("%d",&val);
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
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
 pop()
 {   struct node *r;
     if (head==NULL){
        printf("There is nothing to pop");
     }
     else{

     r=head;
     head=head->next;
     printf("\npopped value is %d",r->data);
     free(r);
     }
 }

 display()
 {   struct node *temp;
 temp=head;
 if(head==NULL)
    printf("There is nothing to print ");
     while(head!=NULL)
     {
         printf("\n%d",head->data);
         head=head->next;
     }
 printf("\n");
 }


  void main ()
  {
    //create_node(7);
      //create_node(8);

  int choice;
  printf("\n1.push \n2.pop \n3.display \n4.exit");
  do{
  printf("Enter your choice ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
       push();
       break;
       case 2:pop();
       break;
          case 3:display();
          break;
          case 4: exit(0);


  }
  }while(choice!=4);



  }



//STACK ARRAY WITH THE HELP OF POINTERS

