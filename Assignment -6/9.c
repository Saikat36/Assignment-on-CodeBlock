

/* Write  programe to calculate LCM of two numbers */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            printf("The LCM of two numbers %d and %d is %d.", x, y, i);
            break;
        }
    }
    printf("\n");
    return 0;
}



// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     int x, y, store, lcm;
//     printf("Enter two number: ");
//     scanf("%d %d", &x, &y);
//     for (int i = 1; i <= x && i <= y; i++)
//     {
//         if (x % i == 0 && y % i == 0)
//         {
//             store = i;
//         }
//     }
//     lcm = (x * y) / store;
//     printf("The LCM of two numbers %d and %d is %d.", x, y, lcm);
//     printf("\n");
//     return 0;
// }