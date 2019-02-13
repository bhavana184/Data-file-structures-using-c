//1.Insert n elements in an array
#include<stdio.h>
int main()
{
int i=0,n,a[20];
printf("How many elements you want to enter: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("\n So the array formed is : ");
for(i=0;i<n;i++)
{
printf("\n a[%d]= %d ",i,a[i]);
}
return 0;
}
