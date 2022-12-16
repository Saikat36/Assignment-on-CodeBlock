

/* 8. Write a recursive function to print sum of first N terms of Fibonacci series */

/* right a6e kintu question a series bar korta bola6ilo R akena oi nth term a je value ta hoi seta return kor6a jodi nth term series dekhta hoi tobe, p-2.c te dekhta pabe */


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