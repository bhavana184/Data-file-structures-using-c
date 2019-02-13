#include <stdio.h>
int main()
{
   int n, i, j, a[20], b[20];
   printf("Enter the number of elements in array: ");
   scanf("%d", &n);
   printf("Enter array elements\n");
   for (i = 0; i < n ; i++)
      scanf("%d", &a[i]);
    //Copying elements into array b starting from end of array a
   for (i = n - 1, j = 0; i >= 0; i--, j++)
      b[j] = a[i];
//Copying reversed array into the original.Here we are modifying original array, this is optional.
   for (i = 0; i < n; i++)
      a[i] = b[i];
   printf("Reverse array is : ");
   for (i = 0; i < n; i++)
      {printf("%d", a[i]);printf(" ");}
   return 0;
}
