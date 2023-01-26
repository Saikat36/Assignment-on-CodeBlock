

/* 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ] */

#include<stdio.h>

void sorted(int *p, int n)
{
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (p[i]>p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    
}

int main()
{
    int a[10] = {23,35,21,58,646,32,53,75,86,93};

    sorted(a,10);

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n\n");

    return 0;
}