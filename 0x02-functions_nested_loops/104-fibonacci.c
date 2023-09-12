#include"main.h"

/**
 * main - entry point
 *
 * descerpition:prints the frist 50 fibonacci numbers
 *              starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count, initialos;
	unsigned long f1 = 1, f2 = 2, 
			sum, mx = 1000000, flo = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
		initialos = numlength(mx) - 1 - numlength(f1);

		while (flo > 0 && initialos > 0)
		{
			printf("%d", f1);
			initialos--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = flo + f2o + (f1 + f2) / mx;
		f1 = f2;
		flo = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
