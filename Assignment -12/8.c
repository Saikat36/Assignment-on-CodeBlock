

/* 8. Write a recursive function to print binary of a given decimal number */

#include <stdio.h>

int binary(int n);

int binary(int n)
{
    if (n == 0)
    {
        return 0;
    }

    binary(n / 2);        // Binary bar korta gela 2 dea vag kore kore jeta hoi and last a jokon reminder 0 hoa jai tokon last er vagses theka starting ar vagses porjto joto 0 & 1 asa6a seta print korta hoi, tai aga je kono number er last  reminder ta bar korar jonno print korar aga recursion ke bar bar call kora ho66a & last a print ho66a  

    printf("%d ", n % 2); //  vagses print kora holo karon hoi ata 0 or 1 hobe
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    binary(num);
    printf("\n\n");
    return 0;
}
