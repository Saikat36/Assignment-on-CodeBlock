

/* WAP to print all the elements of a given array in reverse order using function*/

#include <stdio.h>

void rev(int x[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", x[i]);
    }
}

int main()
{
    int x[] = {2, 4, 56, 5, 7};
    rev(x, 5);
    return 0;
}