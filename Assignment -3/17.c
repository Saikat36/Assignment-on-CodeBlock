
// 17. Write a program which takes the length of the sides of a triangle as an input.
//     Display whether the triangle is valid or not.

#include<stdio.h>

int main()
{
    int x,y,z;
    //float total;
    printf("Enter 3 sides of the Triangle : ");
    scanf("%d %d %d",&x,&y,&z);
    //total =
    if( (z*z)>= ((x*x)+(y*y)) )
    {
        printf("Yes! This is valid Triangle");
    }
    else
    {
        printf("NO! This is not valid  Triangle");
    }
    return 0;
}
