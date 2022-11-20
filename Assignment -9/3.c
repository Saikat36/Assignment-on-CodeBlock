
// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;

    while (1)
    {
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thusday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saterday\n");
            break;
        default:
            printf("Invalid Choice\n");
            exit(0);
        }
    }
    printf("\n");
    return 0;
}