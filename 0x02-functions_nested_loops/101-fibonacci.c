#include "main.h"

/**
 * main - entry point
 *
 * descerpition:computes the sum of all
 *              the multiples of 3 or 5
 *              blew 1024 (excluded)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long filb1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(". ");
	}

	return (0);
}
