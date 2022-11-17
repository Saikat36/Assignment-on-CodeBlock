
// **********    
// ****  ****
// ***    ***
// **      **
// *        *

#include<stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        
        /* 2nd perimid */
        for (int j = 1; j <= (rows-i); j++)   // For printing space 
        {
            printf("  ");
        }
        
        for (int k = i; k >=1; k--)   // For printing star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
         
          
           
           