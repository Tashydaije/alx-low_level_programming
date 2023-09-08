#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file n prints it to POSIX stdout.
 * @filename: A pointer to the text file.
 * @letters: the no. of letters the func shld read and prints.
 *
 * Return: If filename is NULL or the file cannot be opened or read - 0.
 *         If write fails or does not write the expected number of bytes - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY, 0400);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}

	w = write(1, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}