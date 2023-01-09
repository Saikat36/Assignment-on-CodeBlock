#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int(*p)[4] = &a[0];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", *(*(p + i) + j)); // p[i][j]
        }
        printf("\n");
    }

    printf("\n\n");

    printf("%u %u\n", a, &a);                  

    printf("%u %u\n", a + 1, &a + 1);       /*  (a+1) -  (a)  =  6422000 - 6421984 =  16  */
                                            /*  (&a+1) - (&a) =  6422032 - 6421984 =  48  */
    
    printf("\n\n");
    return 0;
}
