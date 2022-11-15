

/* 9. Write a program to check whether a given number is an Armstrong number or not */

#include <stdio.h>

int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a Number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }

    if (n == sum)
    {
        printf("%d is a Armstrong number", n);
    }
    else
    {
        printf("%d is not a Armstrong number", n);
    }

    return 0;
}