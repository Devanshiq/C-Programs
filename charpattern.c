/*

       A
       A B
       A B C
       A B C D
       A B C D E



*/
void main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",(char)(i+64));
        }
        printf("\n");
    }
}
