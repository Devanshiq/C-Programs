//not running

/*
     1
     1 2 1
     1 2 3 2 1
     1 2 3 4 3 2 1

*/

void main()
{ int k=1;
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=2*i+1;j++)
        {


            printf("%d",k);

            if(k<=(i+1))
            {

                k++;
            }
            else
                {


                k--;

        }}
        printf("\n");
    }
}
