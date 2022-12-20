

/* 2. Write a function to find the smallest number from the given array of any size. (TSRS) */


#include <stdio.h>

int great(int a[], int);

int main()
{
    int a[] = {1, 4, 3, 13, 31, 131, -33, 12, 436};

    int length = sizeof(a) / sizeof(a[0]);

    int minimum = great(a, length);

    printf("\nMinimum no is %d \n\n", minimum);

    return 0;
}

int great(int a[], int length)
{
    int min = a[0];
    
    for (int i = 1; i < length; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}