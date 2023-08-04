#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: function that checks for lowercase character.
 * @c: the integer value  receives
 *
 * Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	return (0);
}
