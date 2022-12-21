

/* 9. Write a function in C to merge two arrays of the same size sorted in descending order. */

#include <stdio.h>

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int b[] = {1, 3, 5, 7, 9};
    int c[10];
    int i, j, k = 0;

    for (i = 0, j = 0; i < 5 && j < 5; k++)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }

    if (i == 5 && j != 5)
    {
        for ( ; j < 5; j++)
        {
            c[k++] = b[j];   // k = 5 complete hobar por k = 6 hobe & c[6] a value jabe
        }
    }

    if (j == 5 && i != 5)
    {
        for ( ; i < 5; i++)
        {
            c[k++] = a[i];   // k = 5 complete hobar por k = 6 hobe & c[6] a value jabe
        }
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d ",c[i]);
    }
    

    return 0;
}