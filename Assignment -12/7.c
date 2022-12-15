

/* 7. Write a recursive function to print squares of first N natural numbers */

#include <stdio.h>

int main()
{
    int N, square = 1;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        square = square * (i * i);
    }
    printf("squares of first %d natural number is: %d", N, square);
    return 0;
}