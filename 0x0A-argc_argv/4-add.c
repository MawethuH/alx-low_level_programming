#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry.
 * @argc: count.
 * @argv: string.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			k = atoi(arg[i]);

			if (k < 48 && k > 57)
			{
				printf("Error\n");
				return (-1);
			}
			else
				sum += k;
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}
	return (0);
}
