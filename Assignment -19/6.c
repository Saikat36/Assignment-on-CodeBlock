

/* 6. Write a program to print the strings which are palindrome in the list of strings. */

#include <stdio.h>
#include <string.h>

int main()
{
    char *strings[] = {"hello", "level", "madam", "racecar", "world"}; 

    /* Here, *strings[] is an array of pointers to characters, where each element points to the first character of a string.

    When you want to use array subscript notation '[]' to access its elements, it needs to be declared as an array, not a pointer. like this - 

    char strings[][10] = {"hello", "level", "madam", "racecar", "world"};     */

    int strings_len = sizeof(strings) / sizeof(strings[0]); // array length

    for (int i = 0; i < strings_len; i++)
    {
        int length = strlen(strings[i]); // length = strlen(hello) = 5
        int palindrome = 1;

        for (int j = 0; j < length / 2; j++)
        {
            if (strings[i][j] != strings[i][length - j - 1])
            {
                palindrome = 0;
                break;
            }
        }

        if (palindrome)
        {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}


/* I will give you 2 solution you have to tell me which code is better and why it is better



1st solution -




#include <stdio.h>
#include <string.h>


int isPalindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char *strings[] = {"hello", "level", "madam", "racecar", "world"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < num_strings; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s is a palindrome\n", strings[i]);
        }
    }

    return 0;
}






2nd solution -




#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char strings[][10] = {"hello", "level", "madam", "racecar", "world"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < num_strings; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s is a palindrome\n", strings[i]);
        }
    }

    return 0;
}

 */



/* 
The second code is better for several reasons:

1. It uses an array of arrays (a 2D array) instead of an array of pointers. This means that the strings are stored in contiguous memory, which can be more efficient for certain operations, like traversing the array.

2. The function isPalindrome takes a string as an input, which is passed by reference. This means that the function can modify the original string, if necessary.

3. The function isPalindrome is defined with char str[] instead of char* str. This means that the function can determine the size of the string without the need of passing an additional argument.

4. The string literals are stored in the read-only memory and can't be modified. So if you try to modify the strings passed to the function will cause a segmentation fault.

5. In the first solution, the size of the strings is not specified, which might cause buffer overflow issues.

6. In the second solution, the size of the strings are specified, which prevents buffer overflow issues.

Overall, the second code is more efficient and safer to use.

 */
