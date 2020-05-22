


/*

   5 4 3 2 1
   5 4 3 2
   5 4 3
   5 4
   5



*/

void main()
{
    int n;
    printf("Enter the npo of rows you want to print ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }


}
