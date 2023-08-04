#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: count of arguments
 * @argv: Array of pointers to the strings
 *
 * return: 0 for exit success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
