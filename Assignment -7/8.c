

/* 8. Write a program to find next Prime number of a given number */



#include <stdio.h>
#include <conio.h>

int main()
{
    int a,flag = 0;
    printf("Enter a number: ");
    scanf("%d",&a);

    for (int N = a; N <= 100; N++)
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
            break;
        }
    }

    return 0;
}