#include <stdio.h>

/**
 * main - prints first 50 Fibonnaci numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, sum;

	for (i = 1; i <= 50; i++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
