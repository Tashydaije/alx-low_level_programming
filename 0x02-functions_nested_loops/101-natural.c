#include <stdio.h>

/**
 * main - List all natural numbers below 1024
 * that are multiples of 3 and 5
 * Return: Always 0
 */


int main(void)
{
	int sum = 0;
	int x = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}

		x++;
	}
	printf("%d\n ", sum);
	return (0);
}
