
/* 5. Write a function to print first N odd natural numbers. (TSRN) */

#include <stdio.h>

void natural_num(int num);
int main()
{
    int num, collector;
    printf("Enter a number: ");
    scanf("%d", &num);
    natural_num(num);
    return 0;
}

void natural_num(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
}