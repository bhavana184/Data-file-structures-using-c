//delete an element of 1d array
#include<stdio.h>
int main()
{
int i=0,n,a[20],pos;
printf("How many elements you want to enter: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("\n So the array formed is : ");
for(i=0;i<n;i++)
{
printf("a[%d]= %d ",i,a[i]);
printf(" ");
}
printf("\n Enter the position from where you want to delete the element : ");
scanf("%d",&pos);
for(i=pos;i<n;i++)
    a[i]=a[i+1];
n--;
printf("\n So the array formed after deletion of an element is : ");
for(i=0;i<n;i++)
{
printf("a[%d]= %d ",i,a[i]);
printf(" ");
}
return 0;
}
