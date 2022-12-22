

/* 7. Write a program in C to print or display the lower triangular of a given matrix. */

#include <stdio.h>

int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};

    int b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i <= j)
            {
                printf("%d ", a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}