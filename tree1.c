#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *right;
struct node *left;
}*root;

void createnode(int val){
    struct node *n=(struct node *)malloc(sizeof(struct node));
 n->data=val;
 n->left=NULL;
 n->right=NULL;
    }

 struct node *q[100];
 int front=-1,rear=0,size=0;
  void enqueue(int value)
  {
      q[rear++]=value;
        size++;
      }

 struct node* dequeue()
 {

     size--;
   return( q[front++]);
    }


    int difference(){
    int oddlevel=0,evenlevel=0,evenodddifference=0,nodesineachlevel=0,nooflevels=0;
    if(root==NULL){
        printf("Tree is empty");
        return 0;

    }


    else{

        enqueue(root);
        nooflevels++;
        while(size!=0)
        {
        nodesineachlevel=size;

         while(nodesineachlevel > 0) {
                  struct node *current = dequeue();

                //Checks if currentLevel is even or not.
                if(nooflevels % 2 == 0)
                    //If level is even, add nodes's to variable evenLevel
                    evenlevel += current->data;
                else
                    //If level is odd, add nodes's to variable oddLevel
                    oddlevel += current->data;

                //Adds left child to queue
                if(current->left != NULL)
                    enqueue(current->left);
                //Adds right child to queue
                if(current->right != NULL)
                    enqueue(current->right);
                nodesineachlevel--;
            }
            nooflevels++;
        }
        //Calculates difference between oddLevel and evenLevel
        evenodddifference = abs(oddlevel - evenlevel);
    }
    return evenodddifference;
  }
  int main(){
        root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->right->left = createNode(5);
    root->right->right = createNode(6);

    //Display the difference between sum of odd level and even level nodes
    printf("Difference between sum of odd level and even level nodes: %d", difference());

    return 0;




  }





















