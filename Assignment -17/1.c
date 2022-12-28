


/* Write a program to calculate the length of the string. (without using builtin method) */


#include <stdio.h>

int main() {
    char str[100];  // declare a character array to store the string
    int i;  // counter variable

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read the string from the user

    for (i = 0; str[i] != '\0'; i++);  // loop until the end of the string

    printf("The length of the string is: %d\n", i);  // print the length of the string

    return 0;
}
