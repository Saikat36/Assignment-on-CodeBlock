

/* 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix. */

#include <stdio.h>

int main()
{
    int arr[20][20], row, col,count=0, check_sparce;

    printf("\nInput the Row and Coloumn in the matrix: \n");
    scanf("%d %d", &row, &col);

    check_sparce = (row*col)/2;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Elements: [%d],[%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count>check_sparce)
    {
        printf("\nYes , This is a sparce matrix\n\n");
    }
    else{
        printf("\nNo , This is not sparce matrix\n\n");
    }
    return 0;
}