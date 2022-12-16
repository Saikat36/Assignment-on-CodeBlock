

/* 2. Write a recursive function to calculate sum of first N odd natural numbers */

#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
         /*  if n = 5 then we should run the programe ( 9 + 7 + 5 + 3 + 1 ) = 25 */ 

    return (2 * n - 1) + sum(n - 1);   //  ( 2n-1 ) always return odd value  
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Sum of odd no is : %d ", sum(n));
    return 0;
}