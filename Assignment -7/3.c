
/* 3. Write a program to check whether a given number is there in the Fibonacci series or not */

#include <stdio.h>
#include <conio.h>

int main()
{
    int fib1 = 1, fib2 = 1, fib3, count, num, flag = 0;

    printf("Enter the value of num \n");
    scanf("%d", &num);

    count = 2;

    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;

        if (num == fib3)
        {
            flag = 1;
        }
        fib1 = fib2;
        fib2 = fib3;
    }

    if (flag == 0)
    {
        printf("%d is not in the FIBONACCI series", num);
    }
    else
    {
        printf("%d is in the FIBONACCI series", num);
    }

    return 0;
}