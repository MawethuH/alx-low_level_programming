#include <main.h>

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fl, r, w;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	r = read(fl, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fl);
	return (w);
}
