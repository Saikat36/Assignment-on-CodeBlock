

/* 3. Write a program to read and display a 2D array of strings in C language */

// #include <stdio.h>

// int main()
// {
//     int i, j, row, col;
//     printf("Enter the number of rows: ");
//     scanf("%d", &row);
//     printf("Enter the number of columns: ");
//     scanf("%d", &col);

//     char array[row][col];

//     // Read the array

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("Enter element at index (%d, %d): ", i, j);
//             scanf("%c", &array[i][j]);
//         }
//     }

//     // Display the array

//     printf("The 2D array of strings is:\n");

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%s\t", array[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int rows, cols;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);

//     char *array[rows][cols];
//     printf("Enter the strings: \n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("Enter string for element array[%d][%d]: ", i, j);
//             scanf("%s", array[i][j]);
//         }
//     }

//     printf("The 2D array of strings is: \n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("%s ", array[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    char array[rows][cols]; // assumes maximum length of a string is 100 characters
    printf("Enter the strings: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter string for element array[%d][%d]: ", i, j);
            fgets(array[i], 100, stdin);
            array[i][strlen(array[i]) - 1] = '\0';
        }
    }

    printf("The 2D array of strings is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%s ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
