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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}


