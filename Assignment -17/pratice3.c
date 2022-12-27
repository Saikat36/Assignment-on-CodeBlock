

/* WAP to sort given names in dictionary order */

/* prateeek , prashan ai 2 to name ar modha je name ta oder wise aga asbe seta bar korta hobe, jamon akena prashan name a 's' aga asbe then prateek name ta asbe karon prateeek name a 't' pore ase  */



#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[10][20];
    char temp[10];

    printf("Enter number of names : ");
    scanf("%d", &n);

    printf("Enter names in any order: ");

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nThe sorted order of names are: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    printf("\n\n");

    return 0;
}