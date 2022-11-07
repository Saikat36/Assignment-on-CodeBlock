
// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//     out of 100 and passing marks is 33. Now display whether the candidate passed the
//     examination or failed.


#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,e,total;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a=b+c+d+e;
    if(total>=165 && total<=500)
    {
        printf("Congratulation! You are Pass in the Exam");
    }
    else
    {
        printf("You are Fail in the Exam");
    }
    return 0;
}
