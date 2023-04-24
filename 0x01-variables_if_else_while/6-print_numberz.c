#include <stdio.h>

/**
 * main - print single digit numz of base 10 using putchar
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar(nums + '0');
	}

	putchar('\n');

	return (0);
}
