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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
