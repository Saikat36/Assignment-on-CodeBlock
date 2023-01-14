

#include<stdio.h>

int main()
{
    int x = 5;
    char a = 'b';

    int *p = &x;
    char *q = &a;

    printf("\nValue at x = %d , Address of x = %p\n",*&x,&x);
    printf("\nValue at x == *p = %d , Address of x == p = %p\n",*p,p);

    printf("\nValue at a = %c , Address of a = %p\n",a,&a);
    printf("\nValue at a == *q = %c , Address of a == q = %p\n\n",*q,q);

    return 0;
}
