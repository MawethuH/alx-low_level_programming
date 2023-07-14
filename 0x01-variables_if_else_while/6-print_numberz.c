#include <stdio.h>
/**
 * main - decimals using only putchar
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
