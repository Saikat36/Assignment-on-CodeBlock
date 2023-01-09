
                            
                            /* Discuss about Each & Every array pointer */

#include <stdio.h>

int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    int *p = &a[0];

    int(*q)[3] = &a[0]; /*  "q" dekh6a or vitora je address a6a ota akta "array" address jar modha 3 ta element a6a,
                         1st element - 1,2,3
                         2nd element - 4,5,6    */

    printf("p = %u , q = %u \n\n\n", p, q);                           /*   p = 6422000 ,  q = 6422000           */

    printf("*p = %d , **q = %d \n\n\n", *p, **q);                   /*    *p = 1 ,    **q = 1                 */

    printf("p+1 = %d , *(q+1) = %d \n\n\n", (p + 1), *(q + 1));     /*    p+1 = 6422004 , *(q+1) = 6422012    */

    printf("p+1 = %d , (*q+1) = %d \n\n\n", (p + 1), *q + 1);       /*    p+1 = 6422004 , (*q+1) = 6422004    */

    printf("p+1 = %u , q+1 = %u \n\n\n", p + 1, q + 1);             /*   p+1 = 6422004 , q+1 = 6422012        */

    printf("&a = %d , &a+1 = %d \n\n\n", &a, &a + 1);               /*   &a = 6422000 ,  &a+1 = 6422024       */

    printf("a = %u , a+1 = %u\n\n\n", a , a + 1);                   /*   a = 6422000  ,  a+1 = 6422012        */

    return 0;
}
