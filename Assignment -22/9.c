
/* 9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the size of memory in bytes: ");
    scanf("%d", &size);

    int *ptr = (int *)malloc(size);
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        //exit(0);
        return 1;
    }

    printf("Memory allocated successfully at address %p.\n", ptr);
    
    free(ptr);
    return 0;
}
