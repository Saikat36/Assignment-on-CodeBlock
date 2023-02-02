

/* 4. Write a program to input and print text using dynamic memory allocation. */

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int n, *p;

//     printf("\nEnter no of values you want to enter: ");
//     scanf("%d",&n);

//     p = (int *)malloc(n*sizeof(int));

//     printf("\nEnter %d values\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",p+i);        // store in dynamic memory
//     }

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum = sum+p[i];
//     }

//     printf("Sum of the %d no is : %d",n,sum);

//     free(p);

//     return 0;

// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    int i=0,n;

    printf("Enter no of values you want to enter\n");
    scanf("%d", &n);

    str = (char *)malloc(n * sizeof(char));

    printf("Enter a string: ");

    for (i = 0; i < n; i++)
    {
        scanf("%c",(str + i)); // store in dynamic memory
    }

    printf("The entered string is: ");

    for (i = 0; i < n; i++)
    {
        printf("%c",*(str+i));

    }
    


    free(str);

    return 0;
}
