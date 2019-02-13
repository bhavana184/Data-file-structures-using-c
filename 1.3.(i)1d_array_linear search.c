//linear serach
#include<stdio.h>
int main()
{
int i=0,n,a[20],ele,pos=-1,found=0;
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
printf("\n Enter the element you want to search : ");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
    if(a[i]==ele)
    {
        found=1;
        pos=i;
        printf("\n %d is found at position %d in the given array",ele,pos);
        break;
    }
}
if(found==0)
         printf("\n %d is not found in the given array",ele);

return 0;
}
