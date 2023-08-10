#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(size * sizeof(int));
	i = 0;
	while (min <= max)
	{
		ar[i] = min++;
		i++;
	}
	return (ar);
}
