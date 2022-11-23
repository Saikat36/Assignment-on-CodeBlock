

/* 3. Write a function to check whether a given number is Prime or not. (TSRS) */

#include <stdio.h>

int prime(int);

int main()
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = prime(num);
    if (res == 0)
    {
        printf("\n%d is prime no\n", num);
    }
    else
    {
        printf("\n%d is not a prime no\n", num);
    }
    printf("\n");
    return 0;
}

int prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i != 0)
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}