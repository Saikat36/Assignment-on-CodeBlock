

/* 8. Write a recursive function to print first N terms of Fibonacci series */

#include<stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

void printFib(int n)
{
    if (n==0)
    {
        printf("%d ",n);
    }
    else{
        printFib(n-1);
        printf("%d ",fib(n));
    }
}

int main()
{
    printFib(10);
    printf("\n\n");
    return 0;
}