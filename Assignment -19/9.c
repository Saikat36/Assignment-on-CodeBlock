

/* 9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed */

#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char allowed_users[3][20] = {"user1", "user2", "user3"};
    int i;
    int is_user_allowed = 0;
    long long factorial = 1;
    int number;

    printf("Enter username: ");
    scanf("%s", username);

    for (i = 0; i < 3; i++)
    {
        if (strcmp(username, allowed_users[i]) == 0)
        {
            is_user_allowed = 1;
            break;
        }
    }

    if (is_user_allowed)
    {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &number);

        for (i = 1; i <= number; i++)
        {
            factorial = factorial*i;
        }

        printf("Factorial of %d is %lld", number, factorial);
    }
    else
    {
        printf("Error: user not allowed!");
    }

    return 0;
}
