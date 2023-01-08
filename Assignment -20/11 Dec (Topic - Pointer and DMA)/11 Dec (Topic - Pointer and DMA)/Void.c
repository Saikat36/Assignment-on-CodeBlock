


#include<stdio.h>

int main()
{
    int x = 10;
    char y = 'a';

    void *p = &x;

    printf("%d ",*(int*)p);

    p = &y;

    printf(" %c ",*(char*)p);

    return 0;
}
