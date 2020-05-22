/*
      1
      2 3
      4 5 6
      7 8 9 10

*/
void main()
{
    int k=1;
    int n=5;


for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%2d ",k);
        k++;
    }
    printf("\n");

}
}
