#include <stdio.h>
int main()
{
int n, a[20], i, j, temp;
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
  for (i = 1 ; i <= n - 1; i++) {
    j = i;
    while ( j> 0 && a[j-1] > a[j]) {
      temp          = a[j];
      a[j]   = a[j-1];
      a[j-1] = temp;
      j--;
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
