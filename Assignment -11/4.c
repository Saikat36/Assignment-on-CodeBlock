

/* 4. Write a function to find the next prime number of a given number. (TSRS) */

#include <stdio.h>

int prime(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n%d is the next prime no\n", prime(num));
    return 0;
}

int prime(int num)
{
    int N, flag = 0;
    int limit = num + 10;

    for (N = num; N <= limit; N++)
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
            break;
        }
    }

    return N;
}