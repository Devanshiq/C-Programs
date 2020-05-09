#include<stdio.h>
#include<conio.h>                //Reversing link list using iterative method
#include<malloc.h>               //error
struct node {
int data;
struct node* next;
};
struct node* reverse(struct node * head){

struct node* current, *prev , *next;
current = head;
prev=NULL;
while(current!=NULL)
{
    next= current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head = prev;
return head;
}

struct node *insert(struct node * head, int data)
{
  struct node* temp =(struct node *)malloc(sizeof(struct node*));
      temp->data=data;
      temp->next=NULL;
      if(head==NULL)
        head=temp;
      else{
         struct node* temp1 = head;
         while(head!=NULL){
            temp1=temp1->next;
            temp1->next=temp;
         }
        return head;
      }
    void print(struct node * head){
    while(head->next!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }                                              //incomplete code

    }                                                 //INSERT AND PRINT FUNCTIONS STILL TO BE DEFINED
}
int main()
{
    struct node * head = NULL;
    head= insert(head,2);
    head= insert(head,4);
    head= insert(head,6);
    head= insert(head,5);
    print(head);
    head=reverse(head);
    print(head);
    return;
}
