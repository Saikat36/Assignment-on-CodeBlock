

/* 1. Write a recursive function to calculate sum of first N natural numbers */

/* kokon kokkon recursion use korta hobe tar rule:-

1. Repeted kaj hote hobe
2. task tar size dhira dhira komte hobe
3. kono loop-er bodole recursive function tai bar bar call hobe */

#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Sum is:%d ",sum(n));
    return 0;
}
