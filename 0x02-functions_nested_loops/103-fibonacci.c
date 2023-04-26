#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			total += j;
		}

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
