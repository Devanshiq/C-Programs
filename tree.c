#include <stdio.h>
#include <stdlib.h>

//Represent a node of binary tree
struct node{
    int data;
    struct node *left;
    struct node *right;
};

//Represent the root of binary tree
struct node *root = NULL;

//createNode() will create a new node
struct node* createNode(int data){
    //Create a new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    //Assign data to newNode, set left and right child to NULL
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//Queue will be used to keep track of nodes of tree level-wise
struct node *queue[100];
int rear = 0, front = -1, size = 0;

//Adds a node to queue
void enqueue(struct node *temp){
    queue[rear++] = temp;
    size++;
}

//Deletes a node from queue
struct node *dequeue(){
    size--;
    return queue[++front];
}

//difference() will calculate the difference between sum of odd and even levels of binary tree
int difference() {
    int oddLevel = 0, evenLevel = 0, diffOddEven = 0;

    //Variable nodesInLevel keep tracks of number of nodes in each level
    int nodesInLevel = 0;

    //Variable currentLevel keep track of level in binary tree
    int currentLevel = 0;

    //Check if root is null
    if(root == NULL) {
        printf("Tree is empty\n");
        return 0;
    }
    else {
        //Add root node to queue as it represents the first level
        enqueue(root);
        currentLevel++;

        while(size != 0) {

            //Variable nodesInLevel will hold the size of queue i.e. number of elements in queue
            nodesInLevel = size;

            while(nodesInLevel > 0) {
                  struct node *current = dequeue();

                //Checks if currentLevel is even or not.
                if(currentLevel % 2 == 0)
                    //If level is even, add nodes's to variable evenLevel
                    evenLevel += current->data;
                else
                    //If level is odd, add nodes's to variable oddLevel
                    oddLevel += current->data;

                //Adds left child to queue
                if(current->left != NULL)
                    enqueue(current->left);
                //Adds right child to queue
                if(current->right != NULL)
                    enqueue(current->right);
                nodesInLevel--;
            }
            currentLevel++;
        }
        //Calculates difference between oddLevel and evenLevel
        diffOddEven = abs(oddLevel - evenLevel);
    }
    return diffOddEven;
  }

int main(){

    //Add nodes to the binary tree
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
