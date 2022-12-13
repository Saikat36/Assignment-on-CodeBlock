

/* WAP to check given string is palindrome or not */

/* palindrome:  soja dik theka porle ba ulto dik theka porlau soman asbe jamon "nayan"  =>  "nayan" &&   "nitin"  =>  "nitin" */

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "nitin";
    int i = 0, j = strlen(a) - 1;

    while (i <= j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

    if (i > j)
    {
        printf("\n\nPalindrome\n\n");
    }
    else
    {
        printf("\n\nNot a palindrome\n\n");
    }
    return 0;
}
