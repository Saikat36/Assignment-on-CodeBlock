

// 3. Write a program to swap values of two int variables

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("\n Before swap a = %d , b = %d \n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\n After swap a = %d , b = %d \n",a,b);
    return 0;
}
