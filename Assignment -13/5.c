

/* 5. Write a recursive function to calculate sum of digits of a given number */

#include<stdio.h>

int sum(int n)
{
    if (n % 10 == n)
    {
        return n;
    }

            /*  if n = 145 then we should run the programe ( 1 + 4 + 5 ) =  10  */

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