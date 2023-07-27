#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes letters
 * @s: parameter
 * Return: pointer to string.
 */

char *rot13(char *s)
{
	int i, j;
	char data[] =
"ABCDEFGHIJKLMNOPQRSTUVXYZabcdefghijklmnopqrstuvxyz";
	char datarot[] =
"NOPQRSTUVXYZABCDEFGHIJKLMnopqrstuvxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (8j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
