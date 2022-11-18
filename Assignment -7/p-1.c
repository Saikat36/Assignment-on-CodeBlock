

/* 11. Write a program to find the position of first 1 in LSB. */

#include <stdio.h>

int main()
{
    int x = 12, count = 0;
    while (x != 0)
    {
        count++;
        if (x & 1 == 1)
        {
            break;
        }
        else
        {
            x = x >> 1;
        }
    }
    printf("First 1 from LSB is at %d", count);
    return 0;
}