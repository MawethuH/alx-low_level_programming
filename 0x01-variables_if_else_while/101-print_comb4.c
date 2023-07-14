#include <stdio.h>
/**
 * main - three number combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;


	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = a + 1; c < 10; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
