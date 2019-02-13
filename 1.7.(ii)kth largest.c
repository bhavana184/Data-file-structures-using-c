   #include <stdio.h>
    void main ()
    {
        int number[30];
        int i, j, a, n,k;
        printf("How many elements you want to enter : ");
        scanf("%d", &n);
        printf("Enter the numbers : \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
        /*  sorting begins ... */
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below :\n");
        for (i = 0; i < n; ++i)
        {
            printf("%d", number[i]);
            printf(" ");
        }
        printf("\nEnter the value of K for kth largest: ");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(i==k)
{printf("%d is Your Kth largest",number[i-1]);
break;}
}
    }
