

/* 6. Write a program in C to find the sum of rows and columns of a Matrix */

#include <stdio.h>

int main()
{
    int arr[50][50];
    int row, col, sum = 0;

    printf("\nInput the Row and Colums of the matrix: ");
    scanf("%d %d", &row, &col);

    printf("\nInput elements in the first matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nElements: [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
            printf("%d\t", arr[i][j]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0)
            {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("\n\nSum of the right diagonal is: %d\n\n", sum);

    return 0;
}