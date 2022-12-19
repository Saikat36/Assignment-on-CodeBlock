
/* Write a function to add 2 array  */

#include <stdio.h>

int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 3,
                   4, 2, 6};

    int b[3][3] = {3, 4, 5,
                   3, 4, 2, 
                   6, 0, 5};

    int c[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}