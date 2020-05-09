#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,pos,arr[10];
    printf("\n Enter the elements in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {

        printf("\n arr[%d]=" ,i);
        scanf("%d",&i);

}
printf("\n Enter the position from the element has to be deleted");
scanf("%d",&pos);
for(i=pos;i<n-1;i++)
    arr[i]=arr[i+1];
n--;
printf("\n The arrray after deletion is : ");
for(i=0;i<n;i++);
printf("\n arr[%d]=%d",i,arr[i]);
getch();
return 0;
}

