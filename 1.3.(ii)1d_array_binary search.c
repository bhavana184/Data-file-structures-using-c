//binary search
#include<stdio.h>
int main()
{
int i=0,n,a[20],ele,pos=-1,found=0,first,last,mid;
printf("How many elements you want to enter: ");
scanf("%d",&n);
printf("\nPlease!!enter a sorted array\n");
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
printf("\n Enter the element you want to search : ");
scanf("%d",&ele);
first=0,last=n-1;

while(first<=last)
{
    mid=(first+last)/2;
    if(a[mid]==ele)
    {
        found=1;
        pos=mid;
        printf("\n %d is found at position %d in the given array",ele,pos);
        break;
    }
    if(ele<a[mid])//search in left portion
        last=mid-1;
    else if(ele>a[mid])//search in right portion
        first=mid+1;
}
if(first>last && found==0)
         printf("\n %d is not found in the given array",ele);

return 0;
}
