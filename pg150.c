#include <stdio.h>
#include <conio.h>

          typedef struct distance{
             int kms;
             int metres;
          }DISTANCE;
          DISTANCE add_distance(DISTANCE,DISTANCE);
           DISTANCE substract_distance(DISTANCE,DISTANCE);
           DISTANCE d1,d2,d3,d4;
           int main(){
                       int option;
                       do{
                           printf("\n ***************MAIN MENU******************* ");
                            printf("\n Read the distances ");
                             printf("\n display the distances ");
                        printf("\n add the distances ");

                             printf("\n substarct the distances ");
                       printf("\n Exit");
                       printf("\n Enter your option");
                       scanf("%d",&option);
                       switch(option)
                       {
                              case 1:
                              printf("\n Enter teh first distance in kms and meetres : ");
                              scanf("%d%d", &d1.kms,&d1.metres);
                               printf("\n Enter teh second distance in kms and meetres : ");
                              scanf("%d%d", &d2.kms,&d2.metres);break;

                              case 2:
                              printf("\n The firstdistance is : %d kmd %d metres",d1.kms,d1.metres);
                              printf("\n The second distance is : %d kmd %d metres",d2.kms,d2.metres);break;

                              case 3:
                              d3=add_distance(d1,d2);
                              printf("\n The sum of two distaNCES IS : %dkms %dmetres",d3.kms,d3.metres);
                              break;


                              case 4:
                              d4=substract_distance(d1,d2);
                               printf("\n The difference of two distaNCES IS : %dkms %dmetres",d4.kms,d4.metres);
                              break;
                              }
                    }while(option!=5);
                    getch();
                    return 0;
                }


                DISTANCE add_distance(DISTANCE d1, DISTANCE d2)
                {
                      DISTANCE sum;
                      sum.metres=d1.metres+d2.metres;
                      sum.kms=d1.kms+d2.kms;
                      while(sum.metres >= 1000)
                      {
                         sum.metres=sum.metres%1000;
                         sum.kms  = sum.kms+1;
}return sum;
}


DISTANCE substract_distance(DISTANCE d1, DISTANCE d2)
{
    DISTANCE sub;
    if(d1.kms>d2.kms)
    {
    sub.kms=d1.kms-d2.kms;
    sub.metres=d1.metres-d2.metres;
    }else
    {
     sub.kms=d2.kms-d1.kms;
    sub.metres=d2.metres-d1.metres;
   }
   if(sub.metres<0)
    {
            sub.kms=sub.kms-1;
            sub.metres=sub.metres+1000;
    }
return(sub);

}


