#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;

};
   struct node *start =NULL;
   struct node  *create_cli(struct node *);
   struct node  *display(struct node *);
   struct node *insert_beg(struct node *);
   struct node *insert_end(struct node *);

   struct node *delete_beg(struct node *);
   struct node  *delete_end(struct node*);

   struct node *delete_after(struct node*);
   struct node *delete_list(struct node*);


   int main()
   {
       int option;
       do
       {
           printf("\n MAIN MENU*****************");
            printf("\n 1: Create a list");
                 printf("\n 2: Display a list");
                      printf("\n 3: Add a node at the beginning");
                           printf("\n 4: Add a node at the end ");

                                          printf("\n 5: Delete a node from beginning");
                                               printf("\n 6: Delete a node from the end");

                                                         printf("\n 7: Delete a node after a given node");
                                                              printf("\n 8: Delete the entire list");

                                                                        printf("\n 9: Exit");
                                                                            printf("\n Enter your option : ");
                                                                            scanf("%d",&option);
                                                                            switch(option)
                                                                            {
                                                                                case 1: start=create_cli(start);
                                                                                printf("\n Circular List Created");
                                                                                break;

                                                                                case 2 : start=display(start);
                                                                                break;
                                                                                 case 3 : start=insert_beg(start);
                                                                                break;

                                                                                 case 4 : start=insert_end(start);
                                                                                break;




                                                                                 case 7 : start=delete_beg(start);
                                                                                break;

                                                                                 case 8 : start=delete_end(start);
                                                                                break;




                                                                                 case 10 : start=delete_after(start);
                                                                                break;

                                                                                 case 11 : start=delete_list(start);
                                                                                 printf("\n  Circular Linked list deleted");
                                                                                break;


                                                                            }
       }while(option!=9);
       getch();
       return 0;
   }

         struct node *create_cli(struct node*start)
         {
               struct node*new_node,*ptr;
               int num;
               printf("\n Enter -1 to end");
               printf("\n Enter the data");
               scanf("%d",&num);
               while(num!=-1)
               {
                   new_node=(struct node*)malloc(sizeof(struct node));
                   new_node->data=num;
                   if(start==NULL)
                   {
                       new_node->next=new_node;
                       start=new_node;
                   }
                    else
                    {
                        ptr=start;
                        while(ptr->next!=start)
                            ptr=ptr->next;
                        ptr->next=new_node;
                        new_node->next=start;
                    }
                    printf("\n Enter the data");
                    scanf("%d",&num);
               }
               return start;
         }
                  struct node *display(struct node *start)
                  {
                      struct node *ptr;
                      ptr=start;
                      while(ptr->next!=NULL)
                      {
                          printf(" \t %d",ptr->data);
                          ptr=ptr->next;
                      }
                      return start;

                  }
                    struct node *insert_beg(struct node *start)
                    {
                        struct node *new_node,*ptr;
                        int num;
                        printf("\n Enter the data");
                        scanf("%d",&num);
                        new_node=(struct node*)malloc(sizeof(struct node));
                        new_node->data=num;
                        ptr=start;
                        while(ptr->next!=start)
                            ptr=ptr->next;
                        ptr->next=new_node;
                        start=new_node;
                        return start;
                    }

                    struct node *insert_end(struct node *start)
                    {
                        struct node *ptr,*new_node;
                        int num;
                         printf("\n Enter the data");
                        scanf("%d",&num);
                        new_node=(struct node*)malloc(sizeof(struct node));
                        new_node->data=num;
                        ptr=start;
                        while(ptr->next!=start)
                            ptr=ptr->next;
                        ptr->next=new_node;

                        return start;

                    }
                    struct node *delete_beg(struct node  *start)
                    {
                        struct node  *ptr;
                        ptr=start;
                         while(ptr->next!=start)
                            ptr=ptr->next;
                        ptr->next=start->next;
                        free(start);
                        start=ptr->next;
                        return start;
                    }

                         struct node *delete_end( struct node *start)
                         {
                             struct node *ptr,*preptr;
                             ptr=start;
                              while(ptr->next!=start)
                               {

                                preptr=ptr;
                              ptr=ptr->next;
                               }

                               preptr->next=ptr->next;
                               free(ptr);
                               return start;

                         }

                           struct node *delete_after(struct node *start)
                           {
                               struct node *ptr,*preptr;
                               int val;
                               printf("\n Enter teh value after which the node has to be deleted");
                               scanf("%d",&val);
                               ptr=start;
                               preptr=ptr;
                               while(preptr->next!=val);
                               {
                                   preptr=ptr;
                                   ptr=ptr->next;
                               }
                               preptr->next=ptr->next;
                               free(ptr);
                               return start;
                           }

                             struct node *delete_list(struct node *start)
                             {
                                 struct node *ptr;
                                 ptr=start;
                                 while(ptr->next!=start)
                                    start=delete_end(start);
                                 free(start);
                                 return start;
                             }

