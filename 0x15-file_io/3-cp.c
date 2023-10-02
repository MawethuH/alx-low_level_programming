#include "main.h"

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - ...
 * @filename: ...
 * Return: ...
 */

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - ...
 * @fd: ...
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int copy_from, copy_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	copy_from = open(argv[1], O_RDONLY);
	r = read(copy_from, buffer, 1024);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (copy_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(copy_to, buffer, r);
		if (copy_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(copy_from, buffer, 1024);
		copy_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(copy_from);
	close_file(copy_to);
	return (0);
}
