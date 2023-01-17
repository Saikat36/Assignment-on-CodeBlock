

/* 3. Write a program to read and display a 2D array of strings in C language */

#include <stdio.h>

int main()
{
    int i,j,row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    char array[row][col];

    // Read the array

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element at index (%d, %d): ", i, j);
            scanf("%s", &array[i][j]);
        }
    }

    // Display the array

    printf("The 2D array of strings is:\n");
    printf("Rows:%d\n",row);
    printf("Cols:%d\n",col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%s", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
