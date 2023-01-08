


#include<stdio.h>

int main()
{
    int a[50];
    int i,j ;

    for(i = 0; i<50 ; i++)
    {
        a[i] = i+1;
    }

    int (*p)[5] = a;

    for(i=0 ; i<10 ; i++)
    {
        for(j = 0; j <5; j++)
        {
            printf("%u ", *(*(p+i)+j));     // *(*(p+i)+j) = p[i][j]
        }
        printf("\n");
    } 
    return 0;

}
