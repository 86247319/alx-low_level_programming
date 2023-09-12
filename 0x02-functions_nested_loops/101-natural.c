#include "main.h"

/**
 * main - entry point
 *
 * descerpition:computes the sum of all
 *		the multiples of 3 or 5
 *		blew 1024 (excluded)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum, num;

	for (sum = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
