

#include<stdio.h>

int main()
{
        int a[] = {4,   2,   6,   8,  12,  53,   7,   3};
    // address =  100, 104, 108, 112, 116, 120, 124, 128

    int *p = &a[0]; 
    int **q = &p;

    printf("\n %d \n\n",*(*q+2));  // *(*q+1) = *(*&p+1) = *(p+1) = *(100+1) = *(104) = *&a[1] = a[1] = 2
    printf("\n %d \n\n",*p+1);     // *p+1 = *&a[0]+1 = a[0]+1 = 4+1 =5

    return 0;
}