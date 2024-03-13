#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Array of integers
 * @size: Size of the array in bytes
 * @value: Value to search for
 *
 * Return: Index where the value is located, -1 otherwise
 * if array is NULL or the value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL || size == 0)
		return (-1); /* Handle edge cases */

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2; /* Calculate middle index */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]); /* Print the sub-array being searched */
		}
		printf("\n");

		if (array[mid] == value)
			return (mid); /* Value found */
		else if (array[mid] < value)
			left = mid + 1; /* Search right half */
		else
			right = mid - 1; /* Search left half */
	}

	return (-1); /* Value not found */
}
