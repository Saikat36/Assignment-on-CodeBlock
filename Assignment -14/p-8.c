

/* WAP to rotate right shift by "2" distance in a given array of length "n" */

/*                [1,2,3,4,5]  =>    [4,5,1,2,3]         */

#include <stdio.h>

void rightRotation(int a[], int size, int d)
{
    int x;

    for (int i = 1; i <= d; i++)
    {
        x = a[size - 1];

        for (int j = size - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = x;
    }

    for (int k = 0; k < size; k++)
    {
        printf("%d ",a[k]);
    }
    
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int d;
    printf("Enter the number you want to rotate the array: ");
    scanf("%d", &d);
    rightRotation(a, 5, d);
    return 0;
}