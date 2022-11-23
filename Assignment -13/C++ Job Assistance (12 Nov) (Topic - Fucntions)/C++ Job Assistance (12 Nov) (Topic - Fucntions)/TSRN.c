#include<stdio.h>

void add(int a, int b);  // decalartion TSRN

int main()
{

    int a,b;
    printf("Enter 2 number\n");
    scanf("%d %d",&a,&b);

    add(a,b); // call

    return 0;
}

void add(int a, int b)  // define
{
     int c = a+b;
     printf("Addition of 2 number  = %d\n\n",c);
}
