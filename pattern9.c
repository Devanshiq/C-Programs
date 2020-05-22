/*

     1
     2 8
     3 9  15
     4 10 16 22
     5 11 17 23 29
     6 12 18 24 30 36


*/
void main()
{int n=6,temp;
    for(int i=1;i<=n;i++)
    {
        temp=i;
        for(int j=1;j<=i;j++)
        {
            printf("%2d  ",temp);
            temp=temp+n;
        }
        printf("\n");
    }
}
