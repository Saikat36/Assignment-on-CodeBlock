/* 1. Write a function to calculate the area of a circle. (TSRS) */

#include <stdio.h>
float circle(float);

int main()
{
    float x, y;
    printf("Enter a radious of a circle: ");
    scanf("%f", &x);
    y = circle(x);
    printf("The area of the circle is %f", y);
    return 0;
}
float circle(float x)
{
    float p = (3.14 * x * x);
    return p;
}