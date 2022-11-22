/* 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS) */

#include <stdio.h>

int isEven(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
    {
        printf("\nThe number is even.\n\n");
    }
    else
    {
        printf("\nThe number is odd.\n\n");
    }
    return 0;
}

int isEven(int num)
{
    return !(num & 1);
}