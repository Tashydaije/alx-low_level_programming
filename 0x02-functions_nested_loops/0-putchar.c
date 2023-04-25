#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char putchar[] = "_putchar\n";
	int i = 0;

	while (putchar[i] != '\0')
	{
		char c = putchar[i];

		_putchar(c);
		i++;
	}

	return (0);
}
