
/* 2. Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p;
    float avg;

    printf("Enter no of values you want to enter\n");
    scanf("%d",&n);

    p = (int *)calloc(n,sizeof(int));

    printf("Enter %d values\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+p[i];
    }
    avg = sum / n;
    printf("Avarage is : %f",avg);
    free(p);
    return 0;
    
}