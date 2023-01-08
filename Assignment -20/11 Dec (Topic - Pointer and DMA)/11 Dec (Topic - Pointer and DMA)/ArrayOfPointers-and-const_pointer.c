


#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};

    int *const q = a;

    printf("%u %u\n",q+1,a);

    int *p[5],i;

    for(i= 0 ; i <5 ; i++)
    {
        p[i] = &a[i];
    }

    for(i = 0; i<5 ; i++)
    {
        printf("%d ",*p[i]);
    }

    return 0;

}
