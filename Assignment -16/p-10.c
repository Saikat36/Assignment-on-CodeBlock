

/* WAP to find Duplicate value in a given array */

#include <stdio.h>

int main()
{
    int a[] = {2, 3, 7, 4, 2, 3, 6, 5};
    int hash[12] = {0};

    for (int i = 0; i < 8; i++)
    {
        hash[a[i]]++;
    }

    for (int i = 0; i < 8; i++)
    {
        if (hash[i] == 2)
        {
            printf("%d --> %d\n", i, hash[i]);
        }
    }
    return 0;
}