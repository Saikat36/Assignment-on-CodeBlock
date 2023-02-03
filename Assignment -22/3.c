

/* 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free */


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p;

    printf("\nEnter no of values you want to enter: ");
    scanf("%d",&n);

    p = (int *)malloc(n*sizeof(int));

    printf("\nEnter %d values\n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);        // store in dynamic memory
    }

    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum+p[i];
    }
    
    printf("Sum of the %d no is : %d",n,sum);

    free(p);

    return 0;
    
}