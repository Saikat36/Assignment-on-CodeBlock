

// 7. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
#include<conio.h>

int main()
{
   int n;

   printf("Enter an Number: \n");
   scanf("%d",&n);

   if ( n & 1 == 1 )
      printf("%d is Odd\n",n);
   else
      printf("%d is Even\n",n);

   return 0;
}
