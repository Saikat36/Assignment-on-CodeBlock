

/* 5. Write a recursive function to print first N even natural numbers */

#include <stdio.h>

int natural(int, int);

int main()
{
    int n, start = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    natural(n, start);
    return 0;
}

int natural(int n, int start)
{
    if (start <= n && ((start & 1) == 0))
    {
        printf("\n Even Numbers are: %d \n\n", start);
    }
    natural(n, start + 1);
}