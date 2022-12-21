

/* 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element. */


#include <stdio.h>

int main()
{
    int a[] = {2, 3, 3, 7, 4, 2, 6, 5};
    int hash[12] = {0};
    int len = sizeof(a)/sizeof(a[0]);
    //printf("%d\n",len);

    for (int i = 0; i < len; i++)
    {
        int x = a[i];
        
        hash[x]++; //  i = 0, a[0] = 2, hash[2] = 1
                   //  i = 1, a[1] = 3, hash[3] = 1
                   //  i = 2, a[2] = 3, hash[3] = 1+1 = 2
    }

    for (int i = 0; i < len; i++)
    {
        if (hash[i] != 0)
        {
            printf("%d --> %d\n", i, hash[i]);      // sorting ta hobar karon holo "i", bccause i start ho66a 0th index theka 
        }
    }
    return 0;
}