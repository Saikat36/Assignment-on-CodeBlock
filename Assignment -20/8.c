

/* 8. Write a program to compute the sum of all elements in an array using pointers. */

#include <stdio.h>

int re_sum(int *arr, int size)
{
    int sum = 0 ; 
    int *end = arr + size;

    while (arr < end)    
    {
        sum = sum + *arr;
        arr++;             
        
        // arr++ means pointer++
    }
    return sum;
}

int main()
{
    int arr[10];
    
    printf("\nEnter some integer : ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nLength of the string: %d\n\n", re_sum(arr,10));
    
    return 0;
}
