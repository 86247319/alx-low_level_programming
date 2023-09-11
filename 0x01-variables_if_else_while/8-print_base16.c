#include<stdio.h>

/**
 * main - entry point
 *
 * Desceripition: print a-z reverse
 *
 * return: 0 (success)
 *
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of f */

	while (digit <= 102) /*102; decimal rep of f */
	{
		putchar(digit);

		/* after 9 we jump till 96; */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
