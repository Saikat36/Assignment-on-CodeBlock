

#include<stdio.h>

int main()
{
    int x = 10;
    int *r = &x ;

    printf("\n\n");

    printf("*r = %d \n",*r);           //   *r = 10
    printf("r = %u \n",r);             //   r = 6422028
    printf("++(*r) = %d \n",++(*r));   //   ++(*r) = 11
    printf("r = %d \n",r);             //   r = 6422028
    printf("++*r = %d \n",++*r);       //   ++*r = 12
    printf("*++r = %d \n",*++r);       //   *++r = 6422024
    printf("*r++ = %d \n",*r++);       //   *r++ = 6422024

   /*    *r = 10 chilo but ato bar r ar address a store kora value ta agea daya hoa6a akon " &x " orthat *p ar jaigai null value = 0 asa ga6a tai jokon *r value print kora hobe tokon *r =0 hoba onno value add hobar por *r = 34;  */

    printf("*r = %d \n\n",*r);         //   *r = 0 karon ta ai uporer rules tar jonno

    return 0;
}
