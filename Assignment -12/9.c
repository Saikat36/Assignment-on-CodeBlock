

/* 9. Write a recursive function to print octal of a given decimal number */

#include <stdio.h>

int octal(int n);

int octal(int n)
{
    if (n == 0)
    {
        return 0;
    }

    octal(n / 8);        // Octal bar korta gela 8 dea vag kore kore jeta hoi and last a jokon reminder 0 hoa jai tokon last er vagses theka starting ar vagses porjto joto reminder asa6a seta print korta hoi, tai aga je kono number er last  reminder ta bar korar jonno print korar aga recursion ke bar bar call kora ho66a & last a print ho66a

    printf("%d", n%8); //  vagses print kora holo karon hoi ata 0 or 1 hobe
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    octal(num);
    printf("\n\n");
    return 0;
}