#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: Argument count
 * @argv: Array of pointers to the strings
 *
 * Return: 0 for exit success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
