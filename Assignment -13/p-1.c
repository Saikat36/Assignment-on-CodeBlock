

/* 7. Write a recursive function to calculate HCF of two numbers */

#include <stdio.h>

int hcf(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
        {
            return b;
        }
        else
        {
            return hcf(a % b, b);
        }
    }

    else
    {
        if (b % a == 0)
        {
            return a;
        }
        else
        {
            return hcf(a, b % a);
        }
    }
}

int main()
{
    int a, b;
    printf("Enter 2 number: ");
    scanf("%d%d", &a, &b);

    printf("HCF is: %d", hcf(a, b));
    
    return 0;
}