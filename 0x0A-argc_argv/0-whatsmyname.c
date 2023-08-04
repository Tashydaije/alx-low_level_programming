#include <stdio.h>

/**
 * main - prints name of the executable file.
 * @argc: count of arguments
 * @argv: Array of pointers to the strings
 *
 * Return: 0 for exit success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
