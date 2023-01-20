
#include <stdio.h>

void display(int *p, int size);
void input(int *p, int size);

int main()
{
    int a[10];

    printf("\na[0] = %d\n",a[0]);
    printf("&a[0] = %d\n",&a[0]);


    input(a,10);
    printf("\n\n");
    display(a,10);
    printf("\n\n");
    
    return 0;
}

void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p+i) ); //  *(p+i) = p[i]
    }
}

void input(int *p, int size)
{
    printf("*p = %d\n",*p);
    printf("*p+1 = %d\n",*p+1);
    printf("p = %d = &a[0] = Address of a[0]\n",p);
    printf("p[0] = %d = a[0] = value at a[0]\n",p[0]);
    printf("p[i] = value at a[i]\n");
    printf("p+1 = %d\n",p+1);
    printf("&p[0] = %d\n",&p[0]);
    printf("&p[1] = %d\n",&p[1]);

    printf("\nEnter %d numbers\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&p[i]);  // (p+i) = &p[i]
    }
}