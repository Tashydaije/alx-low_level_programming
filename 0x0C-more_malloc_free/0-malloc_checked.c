#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of mem needed
 *
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
