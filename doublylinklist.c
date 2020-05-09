#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};

void insertfirst(struct node **s, int value);
void insertafter(struct node **s, int value,struct node *ptr);
void insertlast(struct node **s, int value);
int deletefirst(struct node **s);
int deleteintermediatenode(struct node **s,struct node *ptr);
int deletelast(struct node **s);
void viewlist(struct node **s);
void getfirst(struct node **s);
void getlast(struct node **s);


void main()
{  struct node *start=NULL;
    insertfirst(&start,10);
    insertlast(&start,20);
    viewlist(&start);
    getch();
}



void insertfirst(struct node **s, int value)
{
    struct node *n,*t;
    n=(struct node *)malloc(sizeof(struct node));
    n->info=value;
    n->prev=NULL;
    if (*s==NULL)
        *s=n;
    else
    {
        while(t->next!=NULL)
            t=t->next;
        t=n;
    }
}

    void insertafter(struct node **s, int value,struct node *ptr)
    {
        struct node *n,*t;

        n=(struct node *)malloc(sizeof(struct node));
        n->info=value;
        if (*s==NULL)
          *s=n;
          else
          {  while(t->info!=value)
             ( n->prev=ptr;
              n->next=ptr->next;
              ptr->next->prev=n;
              ptr->next=n;
              )

          }
    }


      void insertlast(struct node **s, int value)
      {
          struct node *n,*t;

        n=(struct node *)malloc(sizeof(struct node));
        n->info=value;
        if (*s==NULL)
          *s=n;
          else
          {    n->next=NULL;
              while(t->next!=value)
            {
                n->prev=t;
                t->next=n;

                }
          }
      }
          int deletefirst(struct node **s)
          { struct node *r;
              if(*s==NULL)
              {printf("list is empty");
              return -1;
              }
              else
              {
                  r=*s;
                  *s=*s->next;
                  *s->prev=NULL;
                  free(r);
                  return 1;
              }


          }
        int deleteintermediatenode(struct node **s,struct node *ptr)
        {   struct node *t;
            if (*s==NULL)
           {printf("list is empty");
           return -1;
           }else{
                while(t->info!=ptr)
            ptr->prev->next=ptr->next;
            ptr->next->prev = ptr->prev;
            free(ptr);
            return 1;
           }
        }

            int deletelast(struct node **s)
            {  struct node *t;
                if (*s==NULL)
               {
             printf("list is empty");
             return -1;
               }
             else
             {
                 while(t->next!=NULL)
                    t=t->next;
                 t->prev->next=NULL;
                 free(t);
             }    return 1;
             }

           void viewlist(struct node **s)
           {
               struct node *t;
               if (*s==NULL)
                printf("list is empty");
                else
               {t=*s;
               while(t!=NULL)
               {
                   printf("%d" ,t->info);
                   t=t->next;
               }
               }
           }
             void getlist(struct node **s)
        {
            if(*s==NULL)
                printf("List is empty");
            else
            {
                printf("%d", *s->info);
            }
        }
          void getlast(struct node **s)
          {  struct node *t;
               if(*s==NULL)
                printf("List is empty");
                else
                {
                    while(t->next!=NULL)
                        t=t->next;
                    printf("%d" ,t->info);
                }
          }



