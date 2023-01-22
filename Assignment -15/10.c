

/* 10. Write a function in C to count the frequency of each element of an array. */

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 6, 2, 1};
    int hash[12] = {0};
    int size = sizeof(arr) / sizeof(arr[0]);   //  array size = 9

    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        hash[x]++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d --> %d\n", i, hash[i]);
    }
    
    return 0;
}