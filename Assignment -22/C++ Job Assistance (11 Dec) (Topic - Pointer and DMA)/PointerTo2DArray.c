#include <stdio.h>

int main()
{
    int a[3][4] = {{32, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int(*p)[4] = a;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    printf("\n\na = %u , **a = %u\n", a, **a);          // a = 6421984 , **a = 32

    printf("\na + 1 = %u , *(*a + 1) = %u\n\n\n", a + 1, *(*a + 1));          // a + 1 = 6422000 ,  *(*a + 1) = 2

    return 0;
}
