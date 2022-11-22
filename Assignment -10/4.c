/* 4. Write a function to print first N natural numbers (TSRN) */

#include<stdio.h>

void natural_num(int num); // function defetation
int main()
{
    int num,collector;
    printf("Enter a number: ");
    scanf("%d", &num);
    natural_num(num);  // function call
    return 0;
}

void natural_num(int num) // function decleration
{
    int i =1;

    while (i <= num)
    {
        printf("%d ",i);
        i++;
    }
}