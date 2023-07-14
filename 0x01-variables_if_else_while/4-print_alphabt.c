#include <stdio.h>
/**
 * main - print alphabets except for q and e
 * Return: 0 (Successful)
 */
int main(void)
{
	char i;

	for (i = 'a'; (i < 'e' || (i > 'e' && i < 'q') || (i > 'q' && i < 'z')); i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
