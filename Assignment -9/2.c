
// 2. Write a menu driven program with the following options:
//  a. Addition 
//  b. Subtraction 
//  c. Multiplication 
//  d. Division 
//  e. Exit



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, x, y;

    while (1)
    {

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. exit\n");

        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two number: ");
            scanf("%d %d", &x, &y);
            printf("Addition is : %d\n", x + y);
            break;
        case 2:
            printf("Enter two number: ");
            scanf("%d %d", &x, &y);
            printf("Subtraction is : %d\n", x - y);
            break;
        case 3:
            printf("Enter two number: ");
            scanf("%d %d", &x, &y);
            printf("Multiplication is : %d\n", x * y);
            break;
        case 4:
            printf("Enter two number: ");
            scanf("%d %d", &x, &y);
            printf("Division is : %d\n", x / y);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice");
        }
    }
    printf("\n");
    return 0;
}