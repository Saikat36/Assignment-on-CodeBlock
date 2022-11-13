#include <stdio.h>

int main()
{
    int count;
    printf("Enter a number: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= 4 + i; j++)
        {
            if (4 - i <= j)
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