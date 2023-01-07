#include<stdio.h>

int swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

int main()
{
    int x = 5, y = 10;
    printf("\nValue before swap x = %d , y = %d\n",x,y);
    swap(&x,&y);
    printf("\nValue after swap x = %d , y = %d\n\n",x,y);   // x = 10 , y = 5

    int *r = &x , *s = &y;

    printf("*r = %d \n",*r);
    printf("++(*r) = %d \n",++(*r));
    printf("++*r = %d \n",++*r);
    printf("*++r = %d \n",*++r);
    printf("*r++ = %d \n",*r++);
    printf("y = %d \n",y);
    printf("*r = %d \n\n",*r);


    return 0;
}
