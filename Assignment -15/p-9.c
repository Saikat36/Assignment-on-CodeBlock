

/* WAP to find the frequency of all the no in a given array */

/* [1,4,6,3,6,3,7,8,1,6] means ai akta array te same no koto bar repeatation hoache jamon akena */

/* 1 -> 2 */
/* 4 -> 1 */
/* 6 -> 3 */
/* 3 -> 2 */
/* 7 -> 1 */

#include <stdio.h>

int main()
{
    int a[] = {2, 3, 3, 7, 4, 2, 6, 5};
    int hash[12] = {0};

    for (int i = 0; i < 8; i++)
    {
        int x = a[i];
        
        hash[x]++; //  i = 0, a[0] = 2, hash[2] = 1
                   //  i = 1, a[1] = 3, hash[3] = 1
                   //  i = 2, a[2] = 3, hash[3] = 1+1 = 2
    }

    for (int i = 0; i < 8; i++)
    {
        if (hash[i] != 0)
        {
            printf("%d --> %d\n", i, hash[i]);
        }
    }
    return 0;
}