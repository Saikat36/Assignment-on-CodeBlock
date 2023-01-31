

/* 4. Write a program in C to demonstrate how to handle the pointers in the program. */

#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
