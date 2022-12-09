

/* 6. Write a recursive function to calculate factorial of a given number */

#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    int x;
    printf("Enter a number: ");
    scanf("%d", &n);

    x = fact(n);

    printf("\nFactorial is: %d\n\n", x);

    return 0;
}