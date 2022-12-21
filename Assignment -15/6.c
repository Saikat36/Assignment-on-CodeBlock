

/* 6. Write a function in C to read n number of values in an array and display it in reverse order. */

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int rev_array[5];
    
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = len - 1, j = 0; i >= 0, j < len; i--, j++)
    {
        rev_array[j] = array[i];
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ",rev_array[i]);
    }
    return 0;
}