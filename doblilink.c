//EXECUTED PERFECTLY

#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node{
int data;
struct node *next;
struct node *prev;

};
struct node* head;
struct node *Getnewnode(int x){
struct node* newnode =(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->prev=NULL;
newnode->next=NULL;
return newnode;
}

void insertathead(int x){
struct node *newnode = Getnewnode(x);
if(head==NULL){
head=newnode;
return;
}
head->prev = newnode;
newnode->next=head;
head=newnode;
}

void ReversePrint(){
struct node *temp=head;
if(temp==NULL) return;
while(temp->next!=NULL){
temp=temp->next;
}

printf("Reverse: ");
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->prev;

}
printf("\n");
}

void print(){
struct node* temp=head;
printf("Forward: ");
while(temp!=NULL){

    printf("%d ",temp->data);
    temp=temp->next;

}
printf("\n");
}
int main(){
head=NULL;
insertathead(2);print(); ReversePrint();
insertathead(4);print(); ReversePrint();
insertathead(6);print(); ReversePrint();

}
