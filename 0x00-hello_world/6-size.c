#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("float size: %lu bytes\n", sizeof(float));
	printf("short size: %lu bytes\n", sizeof(short));
	printf("long size: %lu bytes\n", sizeof(long));
	printf("double size: %lu bytes\n", sizeof(double));
	printf("long double size: %lu bytes\n", sizeof(long double));

	return (0);
}
