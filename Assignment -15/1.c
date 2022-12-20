

/* 1. Write a function to find the greatest number from the given array of any size. (TSRS) */

#include <stdio.h>

int great(int a[], int);

int main()
{
    int a[] = {12, 4, 3, 13, 31, 131, 33, 12, 436};

    int length = sizeof(a) / sizeof(a[0]);

    int maximum = great(a, length);

    printf("\nMaximum no is %d \n\n", maximum);

    return 0;
}

int great(int a[], int length)
{
    int max = 0;
    
    for (int i = 0; i < length; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}