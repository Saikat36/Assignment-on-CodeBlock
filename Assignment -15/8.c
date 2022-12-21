

/* 8. Write a function in C to print all unique elements in an array. */

#include <stdio.h>

int main()
{
    int a[] = {2, 3, 3, 7, 4, 2, 6, 5};
    int hash[12] = {0};
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len; i++)
    {
        hash[a[i]]++;
    }

    for (int i = 0; i < len; i++)
    {
        if (hash[i] == 1)
        {
            printf("%d --> %d\n", i, hash[i]);
        }
    }
    return 0;
}