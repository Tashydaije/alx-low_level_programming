#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: int variable - no. of '\' to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
