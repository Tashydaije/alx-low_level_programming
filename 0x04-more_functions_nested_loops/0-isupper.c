#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if character is uppercase
 * @c: carrier integer var
 * Return: 0 if false, 1 if true
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
