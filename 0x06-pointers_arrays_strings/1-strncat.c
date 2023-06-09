#include "main.h"

/**
 * *_strncat - func that concatenates two strings
 * it will use at most n bytes from src
 * @src: The string to be appended to dest.
 * @dest: The string to be appended upon.
 * @n: number of bytes from src to be appended to dest.
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
