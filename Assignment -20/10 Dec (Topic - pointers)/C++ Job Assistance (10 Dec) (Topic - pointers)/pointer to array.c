#include<stdio.h>

int main()
{
    int a[2][3] = {1,2,3,4,5,6};

    int *p = a;
    int i;

    int (*q)[3] = &a;

    printf("p = %u , q = %u \n",p,q);

    p++;
    q++;

    printf("p++ = %u , q++ = %u \n",p,q);

    return 0;
}
