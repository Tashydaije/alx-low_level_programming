#include "main.h"

/**
 * _memset - func that fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Description: This function fills the first n
 * bytes of the memory area
 * pointed to by s with the constant byte b.
 * returns a pointer to the memory area s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
