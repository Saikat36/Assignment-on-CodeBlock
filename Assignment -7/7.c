

/* 7. Write a program to print all Prime numbers between two given numbers */


#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,flag = 0;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    for (int N = a; N <= b; N++)
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