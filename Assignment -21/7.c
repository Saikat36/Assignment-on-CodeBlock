

/* 7. Write a program to calculate the difference between two time periods. */

#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2, t3;

    printf("Enter 1st Hours min and second\n");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);

    printf("Enter 2nd Hours min and second\n");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    // sec calculate
    if (t1.sec < t2.sec)
    {
        t1.min--;
        t1.sec = 60 + t1.sec;
    }
    t3.sec = t1.sec - t2.sec;

    // min calculate
    if (t1.min < t2.min)
    {
        t1.hour--;
        t1.min = 60 + t1.min;
    }
    t3.min = t1.min - t2.min;

    // hour calculate
    t3.hour = t1.hour - t2.hour;

    printf("\nTime = %d:%d:%d\n",t3.hour,t3.min,t3.sec);

    return 0;
}
