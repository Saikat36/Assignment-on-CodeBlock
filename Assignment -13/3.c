

/* 3. Write a recursive function to calculate sum of first N even natural numbers */


#include <stdio.h>

int sum(int n)
{
    if (n == 1)     // n = 5 hole n joto khon 1 ho66a toto khon cholbe
    {
        return 2;   // n = 1 a sob theka choto even no 2 return hobe 
    }
    
         /*  if n = 5 then we should run the programe ( 10 + 8 + 6 + 4 + 2 ) = 30 */ 

    return (2 * n) + sum(n - 1);   //  ( 2n ) always return even value  
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Sum of even no is : %d ", sum(n));
    return 0;
}