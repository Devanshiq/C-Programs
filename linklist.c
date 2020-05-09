#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
}*head;
 struct node * create(){
 struct node *n =(struct node *)malloc(sizeof(struct node ));
n->next=NULL;
//head=n;
return n;
}
void insertatlast(int value){


struct node *n=create();
 printf("Enter the first value");
    scanf("%d",&n->data);
    if(head==NULL)
        head=n;
    else{

 struct node *temp=head;
while(temp->next!=NULL){

    temp=temp->next;
}
temp->next=n;
    }

}


void display(){
struct node *temp=head;
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
    }
    }

void main(){

insertatlast(1);
insertatlast(2);
display();


}
