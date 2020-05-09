#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int a[50][50],b[50][50],subs[50][50],mul[50][50],r1,c1,r2,c2,add[50][50],trace=0,trace2=0,flag=1,count=0,count1=0,a1,b1,a2,b2,copyarr[50][50];
printf("Enter the no rows and columns of a matrix");
scanf("%d%d",&r1,&c1);
printf("Enter the no rows and columns of b matrix");
scanf("%d%d",&r2,&c2);
printf("Enter the elements of matrix a");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++){
    scanf("%d",&a[i][j]);
    if(a[i][j]==0)
        count++;
}
}

printf("\n The elements of matrix a  are ");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++){
    printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("\n Enter the elements of matrix b");
for(int i=0;i<r2;i++)
{
    for(int j=0;j<c2;j++){
    scanf("%d",&b[i][j]);
    if(b[i][j]==0)
        count1++;
}
}

printf(" The elements of matrix b  are ");
for(int i=0;i<r2;i++)
{
    for(int j=0;j<c2;j++){
    printf("\t%d",b[i][j]);
}
printf("\n");
}

if(r1==r2&&c1==c2){

    printf("Adding the elements of matrix a and b");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++){
    add[i][j]=a[i][j]+b[i][j];
}
}

printf(" The elements of matrix add  are ");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++){
    printf("\t%d",add[i][j]);
}
printf("\n");
}

}
else
{
    printf("can't be added");

}

printf("\nTrace of the matrix a is");

for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++){

        if(i==j){

            trace+=a[i][j];
        }
//printf("\n the value o trace is %d,trace");

    }
}
printf("\n the value of trace a is %d",trace);

printf("\nTrace of the matrix b is");

for(int i=0;i<r2;i++)
{
    for(int j=0;j<c2;j++){

        if(i==j){

            trace2+=b[i][j];
        }


    }
}

printf("\n the value of trace b is %d",trace2);

printf("\nThe value after sustracting b from a is a-b");
for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {

        subs[i][j]=a[i][j]-b[i][j];
    }
}

for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {

        printf("\t%d ",subs[i][j]);
    }
    printf("\n");
}
printf("The transpose of matrix a is");
for(int i=0;i<3;i++)        //i<c1
{

    for(int j=0;j<2;j++)    //i<r1
    {

        printf("\t%d",a[j][i]);
    }
    printf("\n");
}

printf("Th product of the two given matrices will be");
if(c1==r2){
    for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {

        for(int k=0;k<c2;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];

        }
    }
}




for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {

        printf("\t%d",mul[i][j]);
    }
    printf("\n");
}



}

else{
    printf("Product is not possible ");
}

printf("lets see if both the matrices are equal or not ");
if(r1==r2&&c1==c2){
for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {

        if(a[i][j]!=b[i][j])
        {
            flag=0;
            break;
        }

    }
}


        if (flag==1)
        { printf( "\nresult is ");
            printf("\nMatrices are equal ");
        }
        else
        {
               printf( "\nresult is ");

            printf("they are not");}


}
else
    printf("They can't be compared");

    printf("To check whether they are identity matrices or not");

    for(int i=0;i<r1;i++)
{

    for(int j=0;j<c1;j++)
    {

        if(i==j&&a[i][j]!=1)
        {
            flag=0;
            break;
        }

        else if(i!=j&&a[i][j]!=0)
        {
            flag=0;
            break;
        }

    }
}


        if (flag==1)
        { printf( "\nresult is ");
            printf("\nthey are identity matrices ");
        }
        else
        {
               printf( "\nresult is ");

            printf("they are not identity matrices");}

            printf("\nChecking whether matrix is a sparse matrix or not");
            if(count>r1*c1/2)
            {
                printf("Matrix a is a sparse matrix ");
            }
            else
            {
                printf("\nMatrix a is not a sparse matrix");
                printf("\nThe no of zeroes present in matrix a are%d",count);
            }
             if(count1>r2*c2/2)
            {
                printf("Matrix b is a sparse matrix ");
            }
            else
            {
                printf("\nMatrix b is not a sparse matrix");
                printf("\nThe no of zeroes present in matrix b are%d",count1);
            }

            printf("Enter two rows to be exchanged in matrix a ");
            scanf("%d%d",&a1,&b1);
                for(int i=0;i<c1;i++)
                {
                    //swapping
                    int r= a[a1-1][i];
                    a[a1-1][i]=a[b1-1][i];
                    a[b1-1][i]=r;
                }

                printf("Now printing the swapped rows");
                for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        printf("\t%d",a[i][j]);

                    }
                    printf("\n");

                }
                  printf("Enter the  column no  to be swapped ");
                  scanf("%d%d",&a2,&b2);
                  for(int i=0;i<r1;i++)
                  {
                      int r=a[i][a2-1];
                      a[i][a2-1]=a[i][b2-1];
                      a[i][b2-1]=r;
                  }
                  printf("Now printing the swapped columns");
                                 for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        printf("\t%d",a[i][j]);

                    }
                    printf("\n");

                }

printf("Arranging the rows in ascending order of matrix a");
 for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        copyarr[i][j]=a[i][j];

                    }
                    printf("\n");

                }

                 for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        for(int k=j+1;k<c1;k++)
                        {
                            if(a[i][j]>a[i][k])
                            {
                                //swapping
                                swap(a[i][j],a[i][k]);

                            }

                        }
                 //       printf("\t%d",a[i][j]);

                    }
                   // printf("\n");

                }


                 for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        printf("\t%d",a[i][j]);

                    }
                    printf("\n");

                }



                printf("Arranging the columns of matrix a in descending order");
                 for(int j=0;j<c1;j++)
                {
                    for(int i=0;i<r1;i++)
                    {
                        for(int k=i+1;k<r1;k++)
                        {
                            if(copyarr[i][j]<copyarr[k][j])
                            {
                                swap(copyarr[i][j]>copyarr[k][j]);

                            }
                        }
                       // printf("\t%d",copyarr[i][j]);

                    }
                  //  printf("\n");

                }

                printf("Printing the swapped columns");
                 for(int i=0;i<r1;i++)
                {
                    for(int j=0;j<c1;j++)
                    {
                        printf("\t%d",copyarr[i][j]);

                    }
                    printf("\n");

                }



        }
