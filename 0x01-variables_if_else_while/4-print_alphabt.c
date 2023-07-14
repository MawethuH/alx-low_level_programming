#include <stdio.h>
/**
 * main - print alphabets except for q and e
 * Return: 0 (Successful)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
