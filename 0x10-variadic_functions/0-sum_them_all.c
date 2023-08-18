#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its params
 * @n: no. of variadic arguments passed to func
 * @...: variable number of arguments to be calculated
 *
 * Return: If n == 0, return 0,
 * otherwise - return sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
