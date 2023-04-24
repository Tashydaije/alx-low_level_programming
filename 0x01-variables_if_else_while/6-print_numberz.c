#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0 using putchar
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
