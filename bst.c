  #include<stdio.h>
  #include<conio.h>
  #include<malloc.h>
           // showing errors
           //bool is not defined in c


  struct bstnode{
  int data;
  struct bstnode* left;
  struct bstnode* right;
  };

       struct bstnode* newnode(int data)
       {
           struct bstnode* n= (struct bstnode*)malloc(sizeof(struct bstnode));
           n->data=data;
           n->left=n->right=NULL;
           return n;
       }
   struct bstnode* insert(struct bstnode* root, int data)
   {
    if(root==NULL){
        root=newnode(data);

    }
     if(data<=root->data)
        root->left=insert(root->left,int data);
    else (data>=root->data,int data)
        root->right=insert(root->right,int data);
   return root;
   }
   bool search(struct bstnode* root,int data){
   if(root==NULL) return false;
    if (root->data==data)return true;
     if(data<=root->data)return search(root->left,int data);
   else return search(root->right,int data);

}
   int main()
{struct bstnode* root=NULL;
root = insert(root,15);
root = insert(root,10);
root = insert(root,20);
root = insert(root,25);
root = insert(root,8);
root = insert(root,12);
int number;
printf("Enter the number you want to search\n");
scanf("%d ",&number);
if (search(root,number)==true){
    printf("Number is found \n");
}
else
    printf("Number is not found");

    }
