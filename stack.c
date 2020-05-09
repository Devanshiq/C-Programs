#include<stdio.h>
#include<conio.h>
#include<malloc.h>



struct ArrayStack
{
  int top;
  int capacity;
   struct ArrayStack *array;
  };

   struct ArrayStack* create_stack(int cap){
    struct ArrayStack *stack;
   stack= (struct ArrayStack *)malloc(sizeof(struct ArrayStack));
   stack->capacity=cap;
   stack->top=-1;
   stack->array=malloc(sizeof(int)*stack->capacity);
   return stack;
   }

   int isFull(struct ArrayStack *stack)
   {
   if(stack->top == stack->capacity-1);
   return (1) ;

   }


   int isEmpty(struct ArrayStack *stack)
      {
      if(
           stack->top == -1)
         return 1;


      else
      return 0;
      }
   push(struct ArrayStack *stack,int item)
   {   int top;
       if(!isFull(stack))
   {
       stack->top++;
       stack->array->top=item;

   }
   }
   pop(struct ArrayStack *stack)
   { int top;
   if(!isEmpty(stack))
   {  int item;
      item=stack->array->top;
      stack->top--;
      return item;
   }
   return -1;
   }

   main()
   {
     int item,choice;
     struct ArrayStack *stack;
     stack= create_stack(6);
     while(1)
     {
      printf("\n 1.Push");
      printf("\n 2.Pop");
      printf("\n 3.Exit");
      printf("Enter your choice");
      scanf("%d", &choice);
      switch(choice)
      {
      case 1:
      printf("Enter your value");
      scanf("%d", &item);
      push(stack,item);
      break;
      case 2:
      item=pop(stack);
      if(item==-1)
      printf("Stack is empty");
      else
      printf("popped out value is %d",item);
      case 3:exit(0);
    }
    getch();
    }
   }

