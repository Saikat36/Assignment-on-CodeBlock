

/*  related to 4th question */

//        *****
//         ****
//          ***
//           **
//            *


#include<stdio.h>

int main()
{
    int rows;
    printf("Enter Rows: ");
    scanf("%d",&rows);

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= (rows-i); j++)   // For printing space 
        {
            printf(" ");
        }
        
        for (int k = i; k >=1; k--)   // For printing star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
