

/* 9. Write a program to print the elements of an array in reverse order. */



#include <stdio.h>

void printReverseArray(int *arr, int size)
{
    printf("\narray: %d\n", arr); // array: 6422016
    printf("size: %d\n", size);   // size : 5

    int *end = arr + size - 1;

    printf("end: %d\n", end);   // end: 6422040 na hoa end: 6422036 holo karon tar uporer line a *end = arr + size - 1; akhena "-1" kora hoa6a tai

    printf("*end: %d\n", *end);

    printf("Array in reverse order: ");

    while (end >= arr)
    {
        printf("%d ", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printReverseArray(arr, size);

    printf("\n\n");

    return 0;
}
