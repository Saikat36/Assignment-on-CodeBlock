

/* Using Function to call a 2d array */

#include <stdio.h>

void pre(int x[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    pre(a, 4);

    return 0;
}