

/* 5. Write a recursive function to calculate sum of digits of a given number */

#include<stdio.h>

int sum(int n)
{
    if (n % 10 == n)
    {
        return n;
    }

    return (n % 10) + sum(n / 10);
}

int main()
{
    int n;
    int x;
    printf("Enter a number: ");
    scanf("%d", &n);

    x = sum(n);

    printf("\nRecursive function to calculate sum of digits of a given number is: %d\n\n", x);

    return 0;
}