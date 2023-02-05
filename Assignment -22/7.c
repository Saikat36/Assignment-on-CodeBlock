

/* 7. Write a program to demonstrate memory leak in C. */

#include <stdlib.h>

void memoryLeak()
{
    char *p = (char *)malloc(5 * sizeof(char));
    free (p);
    // No free() statement to release the allocated memory
}

int main()
{
    int i = 1;
    while (i)
    {
        memoryLeak();
        i--;
    }
    return 0;
}
