#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data; struct node* next;

};                                                           //incomplete code
struct node *head;                                       //INSERT AND PRINT FUNCTIONS STILL TO BE DEFINED
void reverse(struct node *p){
if(p->head==NULL){
    head=p;
    return ;
}
reverse(p->next);
struct node *q=p->next;
q->next=p;
p->next=NULL;
}

void reverseprint(struct node* p){
if(p==NULL){

    return;
}
reverseprint(p->next);
printf("%d ",p->data);
}

