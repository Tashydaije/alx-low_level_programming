#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: Pointer to array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	i = 0;
	if (size != 0)
	{
		ar = malloc(size * sizeof(c));
	}
	else
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
