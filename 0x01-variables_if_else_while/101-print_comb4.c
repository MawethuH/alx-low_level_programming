#include <stdio.h>
/**
 * main - three number combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;


	for (a = '0'; a < '7'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			for (c = a + 1; c <= '9'; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a + b + c < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
