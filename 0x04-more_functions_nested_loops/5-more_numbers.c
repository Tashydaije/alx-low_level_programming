#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by new line.
 * Return: void
 */

void more_numbers(void)
{
	char c, n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
