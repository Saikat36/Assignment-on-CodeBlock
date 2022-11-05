
#include <stdio.h>
int main(void)
{
	int a = 'd';

	printf("%d\n", a);
	/*OUTPUT - 100 (ASCII Code for character d)*/

	int b = 'dd';
	printf("%d", b);
	/*OUTPUT - 25700 (Explanation in detail given below)*/

	return 0;
}



/* (%d, a) prints 25700 as output
01100100 01100100 (Binary of 100 100)
Assuming int is of 2 bytes, starting byte is occupied by first
character �d� and second byte by second character �d�. Therefore
overall binary involves
0110010001100100 , i.e 2^14 + 2^13 + 2^10 + 2^6 + 2^5 + 2^2 = 25700. */
