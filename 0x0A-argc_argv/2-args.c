#include <stdio.h>

/**
 * main - prints all arguments given
 * @argc: Argument count
 * @argv: Array of pointers to the strings
 *
 * Return: 0 for exit success
 */

int main(int argc, char *argv[])
{
	int i;

	for(i=0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
