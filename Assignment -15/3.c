

/* 3. Write a function to sort an array of any size. (TSRN) */

#include <stdio.h>
int main()
{
    int a[10], i, r, temp;
    printf("\nEnter 10 integer numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (r = 1; r <= 9; r++) 
    {
        for (i = 0; i <= 9 - r; i++)   
        {
            if (a[i] > a[i + 1])    
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("\nElements are now in ascending order:\n");
    for (i = 0; i < 10; i++)
        printf("%d\n", a[i]);

    printf("\n\n");
    return 0;
}