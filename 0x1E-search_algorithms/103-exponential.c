#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int _binary_search(int *array, int low, int high, int value)
{
	int i, mid;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array:");
		for (i = low; i <= high; i++)
			printf(" %d,", array[i]);
		printf("\n");

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, high;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	high = bound < size ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, high);

	return (_binary_search(array, bound / 2, high, value));
}
