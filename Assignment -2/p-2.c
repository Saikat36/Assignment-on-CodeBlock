

#include<stdio.h>
int main()
{
    int x = 50, y = 30, z = 24, max;
    max = (x > y) ? ((x>z) ? x : z):((y>z) ? y : z);
    printf("Maximum is %d",max);
    return 0;
}

