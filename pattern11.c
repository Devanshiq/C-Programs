
/*
     1
     1 2 1
     1 2 3 2 1
     1 2 3 4 3 2 1

*/

void main()
{int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("%d ",j);
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
