#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: carrier variable
 * Return: 0 if false, 1 if true
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
