
// Give a example where if and else both condition are running

#include<stdio.h>
int main()
{
    if (1)
    {
        printf("hello\n");
        goto l1;
    }
    else{
        l1:printf("bye\n");
    }
    return 0;
}