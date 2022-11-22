
/* 6. Write a function to calculate the factorial of a number. (TSRS) */

#include <stdio.h>

int factorial(int num);

int main()
{
    int fact, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("\nThe factorial is: %d\n\n",fact);
    return 0;
}

int factorial(int num)
{
    int fac = 1;

    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }

    return fac;
}