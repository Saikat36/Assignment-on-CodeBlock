



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *ptr;

    ptr = (int *)malloc(4);

    if (ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    

    free(ptr);

    return 0;
    
}