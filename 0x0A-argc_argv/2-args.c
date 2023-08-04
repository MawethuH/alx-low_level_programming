#include <stdio.h>
#include "main.h"

/**
 * main - entry.
 * @argc: count.
 * @argv: strings.
 * Return: int.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	(void) argv;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
