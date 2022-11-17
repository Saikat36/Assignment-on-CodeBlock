


//     *
//    ***
//   *****
//  *******
// *********


#include <stdio.h>

int main()
{
    int count;
    printf("Enter no of rows: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= count - 1 + i; j++)
        {
            if (count - 1 - i <= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}