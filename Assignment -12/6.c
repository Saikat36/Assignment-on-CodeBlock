

/* 6. Write a recursive function to print first N even natural numbers in reverse order */

#include <stdio.h>

void natural(int, int);

int main()
{
    int n, start = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    natural(n, start);
    return 0;
}

void natural(int n, int start)
{
    if (start <= n && ((n & 1) == 0))
    {
        printf(" %d ", n);
    }
    natural(n - 1, start);
}