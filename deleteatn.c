 #include<stdio.h>
 #include<conio.h>
 #include<malloc.h>     //not working properly
 struct node{
 int data;
 struct node* next;
 };
 struct node * head;
 void insert (int data, int n){
   struct node* temp1= (struct node *)malloc(sizeof(struct node));
   temp1->data = data;
   temp1->next = NULL;
   if(n==1){
   temp1->next = head;
   head=temp1;
   return;
   }
   struct node *temp2 =head;
   for(int i=0;i<n-2;i++)
   {temp2=temp2->next;
   }
 temp1->next = temp2->next;
 temp2->next = temp1;
   }
void print(){
   struct node *temp=head;
   while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
    }
   printf("\n");

  }
  void delete(int n) {
  struct node *temp1=head;
  if(n==1){
    head=temp1->next;
    free(temp1);
    return;

  }
  int i;
  for(i=0;i<=n-2;i++){
    temp1=temp1->next;
    struct node* temp2 = temp1->next;
    temp1->next=temp2->next;
    free(temp2);

  }
}
  int main(){
    insert(2,1);
    insert(4,2);    // insertion at end
    insert(6,3);
    insert(5,4);
    print();
    int n;
  printf("Enter  a position \n ");
  scanf("%d ",&n);
  delete(n);
  print();
                                               }
