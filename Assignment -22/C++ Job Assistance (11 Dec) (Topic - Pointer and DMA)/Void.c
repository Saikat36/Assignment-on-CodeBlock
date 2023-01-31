

/*  void pointer = ata amon pointer jeta sob rokomar address rakhte pare, 
    jamon akehana integer & character 2 to adress same pointer a rakha hoa6a  */

#include <stdio.h>

int main()
{
    int x = 10;
    char y = 'a';

    void *p;

    p = &x;

    printf("%d \n", *(int *)p);    //  "p" will return void pointer so we need to type cast it, with (int *)

    p = &y;

    printf(" %c ", *(char *)p);    // "p" will return void pointer so we need to type cast it, with (char *)


    return 0;
}
