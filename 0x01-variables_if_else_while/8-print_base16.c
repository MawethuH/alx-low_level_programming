#include <stdio.h>
/**
 * main - 16 hexadecimals
 * Return: 0 (Succesful)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 54; i++)
	{
		if (i < 11 && i > 48)
			putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
