#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}

	_putchar('\n');

}
