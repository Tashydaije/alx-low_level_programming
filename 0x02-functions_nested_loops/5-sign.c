#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: type int integer, can be negative or positive
 * Description: print +, 0, or - depending on n thats passed
 * Return: 1 if +, 0 if 0, and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
