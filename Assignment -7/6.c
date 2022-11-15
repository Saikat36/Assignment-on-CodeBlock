

/* 6. Write a program to print all Prime numbers under 100 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int flag = 0;

    for (int N = 1; N <= 100; N++)
    {
        flag = 0;
        for (int i = 2; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                flag++;
                break;
            }
        }

        if (flag == 0 && N != 1)
        {
            printf(" %d ", N);
        }
    }

    return 0;
}