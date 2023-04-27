#include <stdio.h>

/**
 * main - func that print prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largest_prim = divisor;
		}
		divisor += 1;
	}

	printf("%ld\n", largest_prim);
	return (0);
}
