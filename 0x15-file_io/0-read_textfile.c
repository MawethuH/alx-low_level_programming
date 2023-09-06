#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t des, a, b;

	des = open(filename, O_RDONLY);
	if (des == -1)
		return (0);

	ptr = malloc((sizeof(char)) * letters);
	a = read(des, ptr, letters);
	b = write(STDOUT_FILENO, ptr, a);

	free(ptr);
	close(des);
	return (b);
}
