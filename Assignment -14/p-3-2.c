
/* Find sum of right dioganal/left dioganal of the matrix */

/* left dioganal =    [1, 2, 3,              3 +
                       4, 5, 6,   =>      5 +
                       7, 8, 9]        7          = 15    */




#include <stdio.h>

// int main()
// {
//     int a[3][3] = {1, 2, 3,
//                    4, 5, 6,
//                    7, 8, 9};

//     int sum = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i + j == 2)
//             {
//                 sum = a[i][j] + sum;
//             }
//         }
//     }
//     printf("\nsum is: %d\n\n", sum);
//     return 0;
// }

int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};

    int sum = 0;

    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        sum = a[i][j] + sum;
    }
    printf("\nsum is: %d\n\n", sum);
    return 0;
}