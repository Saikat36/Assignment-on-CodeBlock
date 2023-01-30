

/* 1. Write a function to swap values of two in variables of calling function. */

#include <stdio.h>

void funcall(int *a, int *b);
int main()
{
    int x = 10, y = 5;
    printf("Before swap: x = %d, y = %d\n", x, y);
    funcall(&x,&y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

void funcall(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;    
}

/*  printf("x = %d, y = %d",*a,*b); 

    orthat array ba string ar khatra amaka * use korta hoina kintu variable ar khetra use korta hoi */