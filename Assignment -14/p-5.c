
/* write a programe to find 2nd largest element */
/* Ai programe ta again 7.c te banano hoa6a */

#include <stdio.h>

int main()
{
    int i, a[10], max, second_max;

    printf("Enter 10 numbers:\n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];         // value store kora nilam manually 
    second_max = a[1];  // value store kora nilam manually 

    /* ********************************************************* */
    for (i = 2; i <= 9; i++)
    {
        if (a[i] > max)
        {
            second_max = max;
            max = a[i];
        }

        else    // a[i] < max
        {
            if (a[i] > second_max)
            {
                second_max = a[i];
            }
        }
    }
    /* ********************************************************* */
    printf("\nSecond Largest number is %d", second_max);
    printf("\n");
    return 0;
}