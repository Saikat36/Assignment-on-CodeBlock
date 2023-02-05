

/* 5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    printf("\nEnter no of values you want to enter: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    printf("\nEnter %d values\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i );  // p + i = &p[i]
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + p[i];   // p[i] = *(p+i) 
    }

    printf("\nSum of the %d no is : %d", n, sum);

    free(p);

    return 0;
}