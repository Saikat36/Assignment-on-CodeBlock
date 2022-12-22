

/* 10. Write a program in C to find the row with maximum number of 1s. */
/* Question a bola hoa6a kon row tai sob theka basi poriman a 1 a6a seta bar korta hobe */

#include <stdio.h>

int main()
{
    int mat[4][4] = {{1, 0, 0, 1},
                     {0, 1, 1, 1},
                     {1, 0, 1, 1},
                     {1, 1, 1, 1}};

    int max_count = 0, index;

    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] == 1)
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
            index = i;
        }
    }

    printf("\n\nIndex of row with maximum 1s is %d\n\n", index);
    return 0;
}