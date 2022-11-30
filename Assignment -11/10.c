

/* 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function. */

#include <stdio.h>

int sum(int n);
int factor(int x);


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of the series is : %d",sum(n));
    return 0;
}

int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + factor(i) / i;
    }
    return s;
}

int factor(int x)
{
    int fac = 1;

    while (x > 0)
    {
        fac = fac * x;
        x--;
    }
    return fac;
}