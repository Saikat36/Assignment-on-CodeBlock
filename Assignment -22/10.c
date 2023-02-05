

/* 10. Find out the maximum and minimum from an array using dynamic memory allocation in C. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("\nHow much element you want to enter in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("\nNow enter in the %d elements\n\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

                    /*  Maximum Check  */

    int max = arr[0];

    for (i = 0; i < n / 2; i++) // if n = 5, then n/2 = 2,
    {
        if (arr[i] > max) // then i = 0,1,2  but i=3 not compared
        {
            max = arr[i];
        }
        if (arr[n - i - 1] > max) // and n-i-1 = 5,4  but i=3 not compared
        {
            max = arr[n - i - 1];
        }
    }

    if (n % 2 == 1) // so at least i=3 compared with max
    {
        max = (arr[n / 2] > max) ? arr[n / 2] : max;
    }



                    /*   Minimum check  */

    int min = arr[0];

    for (i = 0; i < n / 2; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[n - i - 1] < min) 
        {
            min = arr[n - i - 1];
        }
    }

    if (n % 2 == 1) 
    {
        min = (arr[n / 2] < min) ? arr[n / 2] : min;
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    free (arr);
    return 0;
}
