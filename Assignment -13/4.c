


/* 4. Write a recursive function to calculate sum of squares of first n natural numbers */


#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
         /*  if n = 5 then we should run the programe ( 5^2 + 4^2 + 3^2 + 2^2 + 1^2 ) = 55 */ 

    return (n * n) + sum(n - 1);   //  ( 2n-1 ) always return odd value  
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Sum of squares is : %d ", sum(n));
    return 0;
}