#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variable*/
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/*print value of ch*/
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
