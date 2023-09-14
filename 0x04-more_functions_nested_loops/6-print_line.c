#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times
 *
 */

void print_line(int n);
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('-');
		_putchar('\n');
	}
}
