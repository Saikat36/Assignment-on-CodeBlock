#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *p;

    printf("Enter value of n\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    printf("Enter %d values......\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("\nEntered Value: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\nOld Address =  %u\n", p);

/* ---------------------------------------------------- */

    p = (int *)realloc(p, 5000 * sizeof(int));

    printf("New Address = %u\n", p);

    printf("New Value: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n\n");

    free(p);        // do not forget to add free function at the end

    return 0;
}
