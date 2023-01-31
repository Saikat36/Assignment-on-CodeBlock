

/* 8. Write a program to compute the sum of all elements in an array using pointers. */

#include <stdio.h>

int re_sum(int *arr, int size)      // if the size = 4
{
    int sum = 0 ; 
    int *end = arr + size;

    printf("\n\n%d\n",arr);         // arr = 6421952
    printf("\n\n%d\n",end);         // end = arr + size = 6421968

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
    int n;
    printf("\nHow much integer you want to sum : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nYou have to enter %d integer: \n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nSum of the array is: %d\n\n", re_sum(arr,n));
    
    return 0;
}
