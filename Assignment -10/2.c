/* 2. Write a function to calculate simple interest. (TSRS) */

#include <stdio.h>
float simple_Interest(int,int,int);
int main()
{
    int p, t, r;
    float I;
    printf("Enter the Principal Amount : ");
    scanf("%d", &p);
    printf("Enter the Rate of Interest : ");
    scanf("%d", &r);
    printf("The amount is borrowed for : ");
    scanf("%d", &t);
    I = simple_Interest(p,t,r);
    printf("Simple Interest is : %f", I);
    return 0;
}

float simple_Interest(int p,int t,int r)
{
    float j = (p * t * r) / 100;
    return j;
}

