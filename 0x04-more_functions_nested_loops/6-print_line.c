#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line
 * @n: int variable
 *
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
