//bubble sort
#include<stdio.h>
int main()
{
int i=0,j,temp,n,a[20],pos;
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
//bubble sort logic
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(a[j]>a[j+1])
        {//swapping
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("\n So the array formed after sorting in ascending order is : ");
for(i=0;i<n;i++)
{
printf("a[%d]= %d ",i,a[i]);
printf(" ");
}
return 0;
}
