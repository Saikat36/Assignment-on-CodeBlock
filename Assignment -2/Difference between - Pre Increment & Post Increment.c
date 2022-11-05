
#include<stdio.h>

int main()
{
    int x = 5, y;

    y = x++;

    printf("%d %d \n",x,y);    // 6 5

    /* ...................... */

    int a = 5, b ;

    b = ++a;

    printf("%d %d \n",a,b);     // 6 6

    return 0;
}
