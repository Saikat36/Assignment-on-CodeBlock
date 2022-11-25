
/* 9. Write a function to check whether a given number contains a given digit or not. (TSRS) */

#include <stdio.h>

int check(int num, int digit)
{
    while (num)
    {
        if (num % 10 == digit)
        {
            return 1;
        }
        num = num / 10;
    }
    return 0;
}

int main()
{
    int num, dig, store;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &dig);
    store = check(num, dig);
    if (store)
    {
        printf("Yes\n\n");
    }
    else
    {
        printf("No\n\n");
    }
    return 0;
}
