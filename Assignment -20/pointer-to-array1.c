

#include <stdio.h>

int main()
{
    int a[50];
    int i, j;

    for (i = 0; i < 50; i++)
    {
        a[i] = i + 1;
    }
    for (i = 0; i < 50; i++)
    {
        printf("%d ", a[i]);        /* 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 */
    }
    printf(" \n\n\n");



    int(*p)[5] = a;                   /* atar madhome bojha ai p name ar pointer ta "a" name  array ke point kor6a jar modha total 5 ta element a6a,                  
                       "p" prothoma 0th point dhor6a, 
                               then 5th point dhor6a, 
                               then 10th point dhor6a,
                               then 15th point dhor6a,
                               then 20th point dhor6a,  

    ai vabe 0th point ta print korar por pointer "p" ke ++ korla next 4 ta element ke skip kora 5th element ke point kor6a */


    for (i = 0; i < 10; i++)
    {
        printf("%d ", **p);
        p++;
    }

    printf(" \n\n\n ");


    for (i = 0; i < 10; i++)
    {
        printf("%u ", *p);
        p++;
    }

    printf(" \n\n\n ");


    return 0;
}
