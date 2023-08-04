#include <stdio.h>
#include "main.h"

/**
 * main - entry.
 * @argc: count.
 * @argv: string.
 * Return: int.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			sum += sum;
		printf("%d\n", sum);
	}
	return (0);
}
