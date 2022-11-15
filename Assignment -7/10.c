

/* 10. Write a program to print all Armstrong numbers under 1000 */

#include <stdio.h>

int main()
{
    int r, num, sum, temp;

    for (int i = 1; i <= 1000; i++)
    {
        num = i;
        sum = 0;
        while (num != 0)
        {
            r = num % 10;
            sum = sum + (r * r * r);
            num = num / 10;
        }

        if (i == sum)
        {
            printf("%d is a Armstrong number\n", i);
        }
    }

    return 0;
}

// #include <stdio.h >

// int main()
// {
//     int num, count = 1, rem, sum;

//     while (count <= 1000)
//     {
//         num = count;
//         sum = 0;

//         while (num)
//         {
//             rem = num % 10;
//             sum = sum + (rem * rem * rem);
//             num = num / 10;
//         }

//         if (count == sum)
//         {
//             printf("%d is a Armstrong number\n", count);
//         }

//         count++;
//     }

//     return 0;
// }
