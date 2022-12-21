

/* 4. Write a function to rotate an array by n position in d direction. 
The d is an indicative value for left or right. 
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */

#include <stdio.h>

void rightRotation(int a[], int size, int d)
{
    int x;

    for (int i = 1; i <= d; i++)              //  bayrer loop 
    {
        x = a[0];                            //  x = a[0] = 32

        for (int j = 1; j <= size - 1; j++) // j = 1;  j <= 4;  j++
        {
            a[j - 1]= a[j];    /* a[0] = a[1]..... a[3] = a[4] jokon asa galo akon a[4] kintu khali a6a tai array 1st value a[4] a daya holo */
        }

        a[size - 1] = x;                   // x = a[5-1] = a[4] = 5
    }

    for (int k = 0; k < size; k++)
    {
        printf("%d ", a[k]);               // 3 4 5 1 2
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int d;
    printf("Enter the number you want to rotate the array: ");
    scanf("%d", &d);
    rightRotation(a, 5, d);   //  if d = 2 then go to 13 no line
    return 0;
}