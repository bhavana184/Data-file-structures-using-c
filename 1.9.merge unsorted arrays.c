#include<stdio.h>
void main()
{
int a1[20],a2[20],a3[40];
int i,n1,n2,n3,index=0;
printf("How many elements you want to enter in array 1: ");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
printf("a1[%d]= ",i);
scanf("%d",&a1[i]);
}
printf("\n So the array1 formed is : ");
for(i=0;i<n1;i++)
{
printf("%d ",a1[i]);
printf(" ");
}
printf("\nHow many elements you want to enter in array 2: ");
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
printf("a2[%d]= ",i);
scanf("%d",&a2[i]);
}
printf("\n So the array2 formed is : ");
for(i=0;i<n2;i++)
{
printf("%d ",a2[i]);
printf(" ");
}
n3=n1+n2;//no. of elements in array3
for(i=0;i<n1;i++)
{
a3[index]=a1[i];
index++;
}
for(i=0;i<n2;i++)
{
a3[index]=a2[i];
index++;
}
printf("\n So the array3-concatenated array formed is : ");
for(i=0;i<n3;i++)
{
printf("%d ",a3[i]);
printf(" ");
}
}
