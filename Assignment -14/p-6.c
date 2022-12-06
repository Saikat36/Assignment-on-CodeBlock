
/* Write a programe to find largest no in a array using function */

#include <stdio.h>

void findmax(int x[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    printf("Max is %d \n\n", max);
}

int main()
{
    int a[5] = {2, 5, 3, 8, 9};

    findmax(a, 5);

    return 0;
}