
/* Write a function to multiplecation of 2 matrix */

#include <stdio.h>

int main()
{
    int a[2][2] = {1, 2,
                   4, 5};

    int b[2][2] = {3, 4,
                   3, 4};

    int c[2][2];

    int sum, i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;

            for (k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }

            c[i][j] = sum;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}