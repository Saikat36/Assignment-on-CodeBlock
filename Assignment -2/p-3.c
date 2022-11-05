


 // 7. Write a program to check whether the given number is even or odd using a bitwise operator.

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int x;
     printf("Enter any Number: ");
     scanf("%d",&x);

     (x & 1)==1 ? printf("%d is odd",x) : printf("%d is even",x);

     return 0;
 }
