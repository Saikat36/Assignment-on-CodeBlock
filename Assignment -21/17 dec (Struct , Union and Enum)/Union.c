
                    /*  UNION  */

#include <stdio.h>

union demo
{
  int i;
  char ch[2];
};

int main()
{
  union demo a;
  a.i = 32770;
  printf("a.i = %d\n", a.i);      // a.i = 32770

  printf("%d %d %d %d\n", a.ch[0], a.ch[1], a.ch[2], a.ch[3]);

  // Little Endian Format (R to L)

  // 00000000  00000000  10000000  00000010  <=  32770 bynary
  //   ch[3]     ch[2]     ch[1]     ch[0]
  //    0         0        -128       2

  return 0;
}