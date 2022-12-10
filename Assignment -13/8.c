

/* 8. Write a recursive function to print first N terms of Fibonacci series */

#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    int n;
    printf("\nEnter a no: ");
    scanf("%d", &n);
    printf("\nFibonacci series of this %dth term is: %d\n\n", n, fib(n));
}