#include <stdio.h>
#include <math.h>

/**
 * main - prime factors
 * Return: 0 always
 */

int main(void)
{
	long int n, max, i;

	n = 612852475143;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
			max = n / i;
	}

	printf("ld\n", max);
	return (0);
}
