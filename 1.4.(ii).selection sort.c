//bubble sort
#include<stdio.h>
//finding smallest element
int smallest(int a[],int n,int k)//k=position of smallest element,n=array size
{
    int pos=k,small=a[k],i;
    for(i=k+1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
  return pos;
}
//selecting smallest/largest element and placing it at right place-selection sort
void selection_sort(int a[],int n)//n = array size
{
    int k,pos,temp;
    for(k=0;k<n;k++)
    {
        pos=smallest(a,k,n);
        temp=a[k];
        a[k]=a[pos];
        a[pos]=temp;
    }
}
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
selection_sort(a,n);
//displaying array after sorting
printf("\n So the array formed after sorting in ascending order is : ");
for(i=0;i<n;i++)
{
printf("a[%d]= %d ",i,a[i]);
printf(" ");
}
return 0;
}
