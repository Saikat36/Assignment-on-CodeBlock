

// 1. Write a program to check whether a given number is positive or non positive.
//  Some modification I do by myself, here code is running for 6 time , this code
//  end when user give the input for 6 times
#include<stdio.h>

int main()
{
    int x,y=1;
    while(y<=6)
    {
    printf("\nEnter a number for Checking a number is positive or non positive: ");
    scanf("%d",&x);

        if(x>0)
        {
            printf("The number is possitive");
        }
        else if(x==0)
        {
            printf("The Number is Not possitive or Not Negative");
        }
        else
        {
            printf("The Number is Negative");
        }
        y++;
    }
    return 0;
}
