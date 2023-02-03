
/* 6. Write a program in C to find the largest element using Dynamic Memory Allocation */

#include <stdio.h>
#include<stdlib.h>


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

    int max = arr[0];

    for (i = 0; i < n / 2; i++)   // if n = 5, then n/2 = 2, 
    {
        if (arr[i] > max)       // then i = 0,1,2  but i=3 not compared
        {
            max = arr[i];
        }
        if (arr[n - i - 1] > max)  // and n-i-1 = 5,4  but i=3 not compared
        {
            max = arr[n - i - 1];
        }
    }

    if (n % 2 == 1)         // so at least i=3 compared with max
    {
        max = (arr[n / 2] > max) ? arr[n / 2] : max;
    }

    printf("Largest element: %d\n", max);

    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("Largest element: %d\n", max);
//     free(arr);

//     return 0;
// }
