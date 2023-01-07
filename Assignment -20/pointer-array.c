

#include<stdio.h>

int main()
{
    int a[2][3] = {1,2,3,4,5,6};

    int *p = a;
    int i;

    int (*q)[3] = &a;

    printf("p = %u , q = %u \n\n",p,q);            /*   p = 6422000 ,  q = 6422000   */

    p++;
    q++;

    printf("p++ = %u , q++ = %u \n\n",p,q);        /*   p++ = 6422004 , q++ = 6422012  */

    printf("p++ = %u , q++ = %u \n\n\n",*p,**q);    /*   p++ = 2 ,     q++ = 4  */

    return 0;
}
