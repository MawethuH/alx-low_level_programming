#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */

int create_file(const char *filename, char *text_content)
{
	int des, wrt;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(des, text_content, len);

	if (des == -1 || wrt == -1)
		return (-1);
	close(des);
	return (1);
}
