
// 6. Write a program to print greater between two numbers. Print one number
//    if both are the same.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Two number: ");
    scanf("%d %d",&x,&y);

    if(x==y)
    {
        printf("\n Both number are same ");
    }
    else
    {
        ( x>y )? printf("\n %d is greater",x) : printf("\n %d is greater",y);
    }


    return 0;
}
