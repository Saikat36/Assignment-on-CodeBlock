

/* 8. Write a program to demonstrate dangling pointers in C. */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 42;        // p is now a dangling pointer
    free(p);
    return 0;
}
