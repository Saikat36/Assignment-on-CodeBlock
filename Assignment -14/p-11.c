

/* WAP to printf the unique no in a given array */
/* Unique no = je no golo matro 1 bar a6a array modha */

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
        if (hash[i] == 1)
        {
            printf("%d --> %d\n", i, hash[i]);
        }
    }
    return 0;
}