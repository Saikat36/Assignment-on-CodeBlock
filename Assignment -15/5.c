

/* 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element. */

#include <stdio.h>

int main()
{
    int a[] = {2, 3, 3, 7, 4, 4, 6, 5};

    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            printf("%d",a[i]);
            break;
        }
    }

    return 0;
}