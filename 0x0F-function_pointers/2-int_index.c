#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int is an int array
 * @array: the array of integers
 * @size: size of array
 * @cmp: pointer to funct for comparison
 *
 * Returns: index of first element != 0
 * 	    -1 if no element match or size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
