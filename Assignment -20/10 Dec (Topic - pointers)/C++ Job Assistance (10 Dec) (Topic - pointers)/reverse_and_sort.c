#include<stdio.h>

void print(int **q , int n)
{
    int i;

    printf("Printing .... \n\n");
    for(i = 0; i<n ; i++)
    {
        printf("%d ",*(*q + i));
    }
    printf("\n");
}

void reverse(int *p, int n)
{
    int i,j,temp;

    for(i = 0,j = n-1; i<=j ; i++,j--)
    {
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
    }

    print(&p,n);
}

void sort(int *p , int n)
{
    int i,j,temp;

    for(i = 0 ; i<n-1 ; i++)
    {
        for(j = i+1 ; j <n ; j++)
        {
            if(p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

}


int main()
{
    int a[] =  {4,2,5,4,7,2,4,7,8,0,8,6,4,23,5,46};
    int i;
    for( i = 0; i < 16 ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    reverse(a,16);
    sort(a,16);

    for( i = 0; i < 16 ; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
