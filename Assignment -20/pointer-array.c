

#include<stdio.h>

int main()
{
    int a[2][3] = {1,2,3,4,5,6};

    int *p = a;
    int i;

    int (*q)[3] = &a;   /*  "q" dekh6a or vitora je address a6a ota akta "array" address jar modha 3 ta element a6a, 
                            1st element - 1,2,3 
                            2nd element - 4,5,6 
    tai jokon 21 & 23 no line a "q++" kora ho66a tokon "q" - a[0] theka a[4] a direct point korta start korlo, ata proman korar jonno 24 no line a "q" value print kora holo */


    printf("p = %u , q = %u \n\n",p,q);            /*   p = 6422000 ,  q = 6422000   */

    p++;
    q++;

    printf("p++ = %u , q++ = %u \n\n",p,q);        /*   p++ = 6422004 , q++ = 6422012  */

    printf("*p = %d , **q = %d \n\n\n",*p,**q);    /*   *p = 2 ,    **q = 4  */

    return 0;
}
